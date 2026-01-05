class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n = s.length();
        int t = k;
        string word = "";
        int wordlen = n/k;
        for(int i=0; i<n; i++) {
            word.push_back(s[i]);
            if(word.length()==t){
                ans.push_back(word);
                word = "";
            }
            cout<<word;
        }
        int newwordlen = t-word.length();
        if(word.length()<t && word!=""){
             while(newwordlen){
                word.push_back(fill);
                newwordlen--;
            }
        }
        if(word!=""){
            ans.push_back(word);
        }
        return ans;
    }
};