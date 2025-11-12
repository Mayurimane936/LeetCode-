class Solution {
public:
    string sortSentence(string s) {
        string ans = "";
        vector<string>temp(s.length());
        string word = "";
        for(int i=0; i<s.length(); i++) {
            if(s[i]==' '){
                string updated_word = word;
                updated_word.pop_back();
                int ind = (word[word.length()-1]) - '0';
                temp[ind] = updated_word;
                // cout<<temp[ind];
                word = "";
            }else {
                word.push_back(s[i]);
            }
        }
        if(word!=""){
            string updated_word = word;
            updated_word.pop_back();
            int ind = (word[word.length()-1]) - '0';
            temp[ind] = updated_word;
        }
        for(int i=0; i<temp.size(); i++) {
            if(ans=="") {
                ans = temp[i];
            }else if(temp[i]!= "") {
                ans = ans + " " + temp[i];
            }
        }
        return ans;
    }
};