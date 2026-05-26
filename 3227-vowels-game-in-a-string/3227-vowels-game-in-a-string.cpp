class Solution {
    string solve(string &s, bool &isAliceTurn, int &aliceVowels){
        string ans = s;
        for(int i=0; i<s.length(); i++){
            if(isAliceTurn){
                if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                    aliceVowels++;
                }
                if(aliceVowels%2!=0){
                    aliceVowels = 0;
                    isAliceTurn = false;
                    return ans.substr(i);
                }
            }
        }
        return "";
    }
public:
    bool doesAliceWin(string s) {
        string temp = s;
        bool isAliceTurn = true;
        int aliceVowels = 0;
        while(temp.length()){
            temp = solve(temp, isAliceTurn, aliceVowels);
            cout<<"tempp "<<temp<<endl;
        }
        if(isAliceTurn){
            return false;
        }
        return true;
    }
};