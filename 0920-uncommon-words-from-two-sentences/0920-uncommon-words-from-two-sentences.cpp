class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       vector<string>ans;
        int n = s1.length();
        int m = s2.length();
        map<string, int>mp;
        string word = "";
        for(int i=0; i<n; i++) {
            if(s1[i]==' ') {
                mp[word]++;
                word= "";
            }else {
           word.push_back(s1[i]);
            }
        }
        mp[word]++;
        word = "";
        for(int i=0; i<m; i++) {
            if(s2[i]==' ') {
                mp[word]++;
                word= "";
            }else {
           word.push_back(s2[i]);
            }
        }
        mp[word]++;
        word = "";
        for(auto ele: mp) {
            if(ele.second == 1) {
                ans.push_back(ele.first);
            }
        }
        return ans;
    }
};