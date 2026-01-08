class Solution {
    int newFunc(vector<vector<int>>& grid){
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        int temp = m;

        while(temp) {
            int maxEle = INT_MIN;
            for(int i=0; i<n; i++) {
                sort(grid[i].begin(), grid[i].end());
                maxEle = max(maxEle, grid[i][m-1]);
                cout<<"maxEle "<<maxEle<<endl;
                grid[i][m-1] = -1;
            }
            temp--;
            ans+=maxEle;
        }
        return ans;
    }
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = newFunc(grid);
        return ans;    
    }
};