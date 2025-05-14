class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        int cnt = 1;
        int n = sentences.size();
        for(int i=0; i<n; i++) {
            int s = sentences[i].length();
            for(int j=0; j<s; j++) {
                if(sentences[i][j] == ' ') {
                    cnt++;
                }
            }
            ans = max(ans, cnt);
            cnt = 1;
        }
        return ans;
    }
};