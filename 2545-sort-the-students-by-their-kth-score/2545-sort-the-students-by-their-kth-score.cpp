class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        vector<vector<int>>ans;
        vector<int>index;

        for(int i=0; i<m; i++) {
            index.push_back(score[i][k]);
        }
        sort(index.begin(), index.end());
        reverse(index.begin(), index.end());

        for(int i=0; i<m; i++) {
           for(int j=0; j<m; j++) {
                if(index[i] == score[j][k]){
                    ans.push_back(score[j]);
                    break;
                }
            }
        }
        return ans;
    }
};