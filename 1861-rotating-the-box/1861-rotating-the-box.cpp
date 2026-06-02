class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>>ans;
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        // cout<<"n "<<n<<"m "<<m<<endl;
        for(int j = 0; j < m; j++) {
            vector<char>temp;
            for(int i = n-1; i >=0; i--) {
                // cout << boxGrid[i][j] << endl;
                temp.push_back(boxGrid[i][j]);
            }
            ans.push_back(temp);
        }
        boxGrid = ans;
        ans.clear();
        n = boxGrid.size();
        m = boxGrid[0].size();
        ans = vector<vector<char>>(n, vector<char>(m));
        for(int j=0; j<m; j++){
            int i = n - 1;   
            int k = n - 1; 

            while(k >= 0) {
                if(boxGrid[k][j] == '*') {
                    i = k - 1;
                }
                else if(boxGrid[k][j] == '#') {
                    boxGrid[k][j] = '.';
                    boxGrid[i][j] = '#';
                    i--;
                }
                k--;
            }
        }
        return boxGrid;
    }
};