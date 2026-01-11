class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string expected = "";
        for(int i=0; i<words.size(); i++) {
            expected.push_back(words[i][0]);
        }
        return expected==s;
    }
};