class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int r = 0, l=0, maxlen=0, len=0;
        int hash[256];
        for(int i=0; i<256; i++) {
            hash[i] = -1;
        }
        while(r<n) {
            if(hash[s[r]]!=-1) {
                if(hash[s[r]]>=l) {
                    l = hash[s[r]]+1;
                }
            }
            len = r-l+1;
            maxlen = max(len, maxlen);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};