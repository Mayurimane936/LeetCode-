class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int n = s.length();
        string word = "";
        for(int i=0; i<n; i++) {
            if(s[i]!=' '){
                word.push_back(s[i]);
            }else if(s[i]==' ') {
                if(k>0) {
                    if(ans==""){
                        ans = word;
                    }else{
                    ans = ans+" "+ word;
                    }
                    k--;
                    word = "";
                }
            }
        }
        if(word!="" && k>0){
             if(ans==""){
                ans = word;
            }else{
                ans = ans+" "+ word;
            }
        }
        return ans;
    }
};