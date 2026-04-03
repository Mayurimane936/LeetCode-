class Solution {
    void charMapping(string a, string b, map<char,int>& temp1, map<char,int>& temp2) {
        int index1 = 1, index2 = 1;
        int n = a.length();
        for(int i = 0; i < n; i++) {
            if(temp1.find(a[i]) == temp1.end()) { 
                temp1[a[i]] = index1++;
            }
            if(temp2.find(b[i]) == temp2.end()) {  
                temp2[b[i]] = index2++;
            }
        }
    }
    bool isMatchingStrings(string a, string b, map<char, int>mp1, map<char, int>mp2){
        string ans1="", ans2="";
        int n = a.length();
        for(int i=0; i<n; i++) {
            ans1.push_back('0' + mp1[a[i]]);
            ans2.push_back('0' + mp2[b[i]]);
        }
        cout<<" ans1, ans2 "<< ans1<<" "<<ans2<<endl;
        return ans1 == ans2;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        int n = pattern.length();
        int m = words.size();
        for(int i=0; i<m; i++) {
            map<char, int>mp1, mp2;
            charMapping(pattern, words[i], mp1, mp2);
            if(!isMatchingStrings(pattern, words[i], mp1, mp2)){
                continue; 
            }
            ans.push_back(words[i]);
        }
        return ans;
    }
};