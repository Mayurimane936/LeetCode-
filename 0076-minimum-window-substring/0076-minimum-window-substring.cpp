class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        int r = 0, l=0, minlen = INT_MAX, cnt=0, sindex = n;
        int hash[256] = {0};
        for(int i=0; i<m; i++) {
            hash[t[i]]++;
        }
        while(r<n) {
            if(hash[s[r]] > 0) {
                cnt = cnt+1;
            }
            hash[s[r]]--;
            while(cnt == m) {
                if(r-l+1 < minlen) {
                    minlen = r-l+1;
                    sindex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) {
                    cnt = cnt-1;
                }
                l++;
            }
            r = r+1;
        }
        return sindex == -1?"": s.substr(sindex, minlen);
    }
};