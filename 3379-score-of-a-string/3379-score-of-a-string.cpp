class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        vector<int> ascii;
        for(int i=0; i<n; i++) {
            ascii.push_back(s[i]);
        }

        int ans=0 ;
        for(int i=0; i<ascii.size()-1; i++) {
            ans += abs(ascii[i]-ascii[i+1]);
        }
        return ans;
    }
};