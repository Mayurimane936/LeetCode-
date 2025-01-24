class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = t.length();
        int cnt = 0;
        int i = 0;
        int j = 0;
        while(i<m && j<s.length()) {
            if(s[j]==t[i]){
                j++;
                cnt++;
            }
                i++;
            
        }
       return cnt == s.length();
    }
};