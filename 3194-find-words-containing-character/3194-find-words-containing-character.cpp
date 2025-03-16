class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();
        for(int i=0; i<n; i++) {
          for(int j=0; j<words[i].length(); j++) {
            if(x == words[i][j]) {
                ans.push_back(i);
                break;
            }
          }
        }
        return ans;
    }
};