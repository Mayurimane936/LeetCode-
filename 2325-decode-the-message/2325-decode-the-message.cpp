class Solution {
public:
    string decodeMessage(string key, string message) {
        int n = key.length();
        map<char,char>mp;
        char curr = 'a';

        for (int i = 0; i < key.size(); i++) {
            if (key[i] == ' ') continue;
            if (mp.find(key[i]) == mp.end()) {
                mp[key[i]] = curr;
                curr++;  
            }
        }
        for(auto ele:mp){
            cout<<"ele first: "<<ele.first<<" "<<ele.second<<endl;
        }
        string ans = "";
        for(int i=0; i<message.length(); i++) {
            if(message[i]==' '){
                ans.push_back(' ');
            }else{
                ans.push_back(mp[message[i]]);
            }
        }
        return ans;
    }
};