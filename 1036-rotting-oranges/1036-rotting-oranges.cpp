class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int tm = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m));
        queue<pair<pair<int, int>, int>>q;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]==2) {
                    vis[i][j] = 2;
                    q.push({{i, j}, 0});
                }else {
                    vis[i][j] = 0;
                }
            }
        }

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm, t);

            q.pop();
            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, 1, 0, -1};
            for(int i=0; i<4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];

                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && vis[nrow][ncol]!=2 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t+1});
                    vis[nrow][ncol] = 2;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(vis[i][j]!= 2 && grid[i][j]==1) {
                    return -1;
                }
            }
        }
        return tm;
    }
};