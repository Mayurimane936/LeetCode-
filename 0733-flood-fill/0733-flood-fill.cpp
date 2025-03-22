class Solution {
    void dfs(int row, int col, vector<vector<int>> &ans, vector<int>& delrow, vector<int>& delcol, int iniColor, int color) {
        int n = ans.size();
        int m = ans[0].size();
        ans[row][col] = color;
        for(int i=0; i<4; i++) {
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=color && ans[nrow][ncol]==iniColor){
                dfs(nrow, ncol, ans, delrow, delcol, iniColor, color);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int iniColor = ans[sr][sc];
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, 1, 0, -1};
        dfs(sr, sc, ans, delrow, delcol, iniColor, color);
        return ans;

    }
};