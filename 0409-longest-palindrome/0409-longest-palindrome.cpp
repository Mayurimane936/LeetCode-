class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1) {
            return 1;
        }

        unordered_map<int, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        int cnt = 0;
        bool isOne = false;
        for(auto ele: mp) {
            if(ele.second % 2 == 0) {
               cnt += ele.second;
            }
           else {
                cnt += ele.second-1;
                isOne = true;
           }
        }
        if(isOne) {
            cnt = cnt+1;
        }
        return cnt;
    }
};