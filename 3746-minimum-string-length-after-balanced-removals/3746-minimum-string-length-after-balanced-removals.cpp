class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int ac = 0;
        int bc = 0;
        int n = s.length();
        for(int i=0; i<n; i++) {
            if(s[i]=='a'){
                ac++;
            }else {
                bc++;
            }
        }
        return abs(ac-bc);
    }
};