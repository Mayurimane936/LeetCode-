class Solution {
public:
    string sortVowels(string s) {
        string ans = s;
        int k = s.length();
        string vowels = "";
        for(int i=0; i<k; i++) {
            if((s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')){
                ans[i] = '_';
                vowels.push_back(s[i]);
            }else if (s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                ans[i] = '_';
                vowels.push_back(s[i]);
            }
        }
        
        sort(vowels.begin(), vowels.end());
        int j = 0;
        for(int i=0; i<k, j<vowels.size(); i++){
            if(ans[i]=='_'){
                ans[i]=vowels[j];
                j++;
            }
        }

        return ans;
    }
};