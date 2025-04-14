class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int ans = 0;
        int hash[26];
        int val=26;
        for(int i=0; i<26; i++) {
            hash[i]=val;
            val--;
        }

        for(int i=0; i<n; i++) {
            ans+= (i+1)*hash[s[i]-97];
        }
        return ans;
    }
};