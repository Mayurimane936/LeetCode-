class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        int n = sentence.size();
        for(int i=0; i<n; i++) {
            mp[sentence[i]]++;
        }
        return mp.size()==26;
    }
};