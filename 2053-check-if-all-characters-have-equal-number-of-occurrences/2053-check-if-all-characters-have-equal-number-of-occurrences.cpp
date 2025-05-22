class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }

        int cnt = mp[s[0]];
        for(auto ele: mp) {
            if(ele.second!=cnt) {
                return false;
            }
        }
        return true;
    }
};