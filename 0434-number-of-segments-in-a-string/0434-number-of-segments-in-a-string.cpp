class Solution {
public:
    int countSegments(string s) {
      int ans = 0;
      int n = s.length();
      for(int i=0; i<n; i++) {
        if(s[i]!=' ') {
            while(i<n && s[i]!=' ')     i++;
            ans++;
        }
      }
      return ans;
    }
};