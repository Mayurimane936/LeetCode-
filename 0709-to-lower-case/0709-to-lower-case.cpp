class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        for(auto &ele: s) {
            ele = tolower(ele);
        }
        return s;
    }
};