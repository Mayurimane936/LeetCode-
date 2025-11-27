class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.length();
        int m = 0;
        int spaces = 0;
        unordered_map<char,string>mp;
        string word = "";
        int j = 0;
        set<char>st1;
        set<string>st2;
        for(int i=0; i<n; i++) {
            st1.insert(pattern[i]);
        }
        for(int i=0; i<s.length() && j<n; i++) {
            if(s[i]==' '){
                spaces+=1;
                mp[pattern[j]]=word;
                j++;
                st2.insert(word);
                word = "";
            }else {
                word.push_back(s[i]);
            }
        }
        if(word!=""){
            mp[pattern[n-1]]=word;
            st2.insert(word);
            word = "";
        }
         for(auto ele:mp){
            cout<<"mp"<<ele.first<<ele.second<<endl;
        }
        m = spaces+1;
        if(n!=m || st1.size()!=st2.size()) {
            return false;
        }
       
        int ans = 0;
        int k = 0;
        for(int i=0; i<s.length() && k<n; i++) {
            if(s[i]==' '){
                spaces+=1;
                if(word == mp[pattern[k]]){
                    k++;
                    ans++;
                }
                word = "";
            }else {
                word.push_back(s[i]);
            }
        }
        if(word!=""){
            if(word == mp[pattern[n-1]]){
                ans++;
            }
        }
        return ans == m;
    }
};