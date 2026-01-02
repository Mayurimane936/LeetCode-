class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int n = s.length();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='R'){
                cnt++;
            }else if(s[i]=='L'){
                cnt--;
            }

            if(cnt == 0){
                ans++;
            }
        }
      return ans;
    }
};