class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        string t="";
        for (char c : s) {
            t += std::tolower(static_cast<unsigned char>(c));
        }
        int cnt = 0;
        int cnt1 = 0;
        for(int i=0; i<n/2; i++) {
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'){
                cnt++;
            }
        }
         for(int i=n/2; i<n; i++) {
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'){
                cnt1++;
            }
        }
        return cnt == cnt1;
    }
};