class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char, int> mp;
        int n = s.length();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int m = t.length();
        for(int i=0; i<m; i++){
            mp[t[i]]--;
            if(mp[t[i]]==0){
                mp.erase(t[i]);
            }
        }
        cout<<"mp.size "<<mp.size()<<endl;
        return mp.size()==0;
    }
};