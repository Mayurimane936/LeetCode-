class Solution {
public:
    string interpret(string command) {
        int n = command.length();
        string ans = "";
        for(int i=0; i<n; i++){
            if(command[i]=='(' && command[i+1]==')'){
                ans = ans + 'o';
            }else if(command[i]=='G' || command[i]=='a' || command[i]=='l'){
                ans = ans+command[i];
            }
        }
        return ans;
    }
};