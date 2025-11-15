class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.length();
        string word = "";
        for(int i=0; i<n; i++) {
            if(s[i]==' '){
                reverse(word.begin(), word.end());
                if(ans == ""){
                    ans = word;
                }else {
                    ans = ans + " " + word;
                }
                word = "";            
            }else {
                word.push_back(s[i]);
            }
        }
        if(word!=""){
            reverse(word.begin(), word.end());
            if(ans == ""){
                    ans = word;
            }else {
                    ans = ans + " " + word;
            }
        }
        return ans;
    }
};