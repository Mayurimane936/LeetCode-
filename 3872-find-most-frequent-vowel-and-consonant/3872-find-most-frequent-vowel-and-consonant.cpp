class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.length();
        if(n==0){
            return 0;
        }
        map<char, int>mp;
        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }
        int maxvfre = 0;
        int maxnfre = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == 'a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' ) {
                maxvfre = max(maxvfre, mp[s[i]]);
            }else {
                maxnfre = max(maxnfre, mp[s[i]]);
            }
        }
        return maxvfre + maxnfre;
    }
};