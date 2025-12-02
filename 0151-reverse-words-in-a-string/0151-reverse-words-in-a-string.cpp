class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        string word = "";
        for(int i=n-1; i>=0; i--) {
            if(s[i]==' '){
                if(word!=""){
                reverse(word.begin(), word.end());
                if(ans!=""){
                    ans = ans + " " + word;
                }else{
                    ans = word;
                }
                word ="";
                }
            }else{
                word.push_back(s[i]);
            }
        }
        if(word!="") {
            reverse(word.begin(), word.end());
            // cout<<"ans at end"<<ans<<endl;
            if(ans!=""){
                ans = ans + " " + word;
            }else{
                ans = word;
            }
        }
        // cout<<"ans "<<ans<<endl;
        return ans;
    }
};