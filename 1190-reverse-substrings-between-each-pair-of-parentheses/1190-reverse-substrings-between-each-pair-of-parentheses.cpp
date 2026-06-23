class Solution {
    void reverseSubstring(string &temp){
        int n = temp.length();
        for (int j = 0; j < n; j++) {
            if (temp[j] == ')') {
                int i = j;
                while (temp[i] != '('){
                    i--;
                }
                reverse(temp.begin() + i + 1, temp.begin() + j);
                temp.erase(j, 1);
                temp.erase(i, 1);
                break; 
            }
        }
    }
public:
    string reverseParentheses(string s) {
        string ans = "";
        stack<string>st;
        string word = "";
        string temp = s;
        int n = temp.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == ')') {
                cout<<"temp "<<temp<<endl;
               reverseSubstring(temp);
            }
        }
        return temp;
    }
};