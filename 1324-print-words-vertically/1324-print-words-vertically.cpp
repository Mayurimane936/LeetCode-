class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>ans;
        int n = s.length();
        vector<string>temp;
        vector<vector<string>>words;

        for(int i=0; i<n; i++) {
            if(s[i]!=' '){
                temp.push_back(string(1, s[i]));;
            }else{
                words.push_back(temp);
                temp.clear();
            }
        }
        if(temp.size()!=0){
            words.push_back(temp);
        }

        int mxlen = 0;
        for (int i = 0; i < words.size(); i++) {
            mxlen = max(mxlen, (int)words[i].size());
        }
        string word = "";
        for (int i = 0; i < mxlen; i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i < words[j].size())
                    word+= words[j][i];
                else
                   word+=" ";
            }
            ans.push_back(word);
            word = "";
        }

        for(int i=0; i<ans.size(); i++){
            string &wd = ans[i];
            int j = wd.size()-1;
            while(j>=0){
                if(wd[j]==' '){
                    j--;
                    wd.erase(j + 1);
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};