class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int>mp1;
        map<char, int>mp2;

        int n = s.length();
        for(int i=0; i<n; i++) {
            mp1[s[i]]++;
        }
        for(int i=0; i<n; i++) {
            mp2[t[i]]++;
        }
        int temp1 = n; int temp2 = n;
        for(int i=0; i<n; i++) {
            if(mp1[t[i]]>0){
                temp1--;
                mp1[t[i]]--;
            }
        }
        for(int i=0; i<n; i++) {
            if(mp2[s[i]]>0){
                temp2--;
                mp2[s[i]]--;
            }
        }
        return min(temp1, temp2);
    }
};