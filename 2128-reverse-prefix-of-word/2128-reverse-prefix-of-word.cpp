class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int n = word.length();
        string temp = "";
        int index = -1;
        for(int i=0; i<n; i++) {
            if(word[i]==ch) {
                index = i;
                temp.push_back(ch);
                break;
            }else {
                temp.push_back(word[i]);
            }
        }
        if(index==-1) {
            return temp;
        }
        reverse(temp.begin(), temp.end());
        cout<<temp;
        ans = temp;
        for(int i=index+1; i<n; i++) {
            ans.push_back(word[i]);
        }
        cout<<ans;
        return ans;
    }
};