class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j=n-1;
        while(i<=j) {
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        int n = words.size();
        for (int i=0; i<n; i++) {
            if(isPalindrome(words[i])){
                ans = words[i];
                // return words[i];
                break; 
            }
        }
        return ans;
    }
};