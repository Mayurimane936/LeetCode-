class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        int n = s.length();
        for(int i=0; i<n; i++) {
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }else {
                ans.push_back(s[i-1]-'0'+ s[i]);
            }
        }
        return ans;
    }
};