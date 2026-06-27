class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> onesRow, onesCol, zerosRow, zerosCol;

        int m = grid.size(), n = grid[0].size();

        for(int i=0; i<m; i++){
            int ones = 0;
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1)         ones++;
            }
            onesRow.push_back(ones);
            zerosRow.push_back(n-ones);
        }

        for(int j=0; j<n; j++){
            int ones = 0;
            for(int i=0; i<m; i++){
                if(grid[i][j] == 1)         ones++;
            }
            onesCol.push_back(ones);
            zerosCol.push_back(m-ones);
        }

        vector<vector<int>> ans = grid;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return ans;
    }
};