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
            cout<<"mp1[a[i]] "<<mp1[a[i]]<<" "<<a[i]<<endl;
            cout<<"mp2[b[i]] "<<mp2[b[i]]<<" "<<b[i]<<endl;

            ans1.push_back('0' + mp1[a[i]]);
            ans2.push_back('0' + mp2[b[i]]);
        }
        cout<<" ans1, ans2 "<< ans1<<" "<<ans2<<endl;
        return ans1 == ans2;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        unordered_map<char, int>mp;
        int n = pattern.length();
        int m = words.size();
        for(int i=0; i<n; i++) {
            mp[pattern[i]]++;
        }
        for(int i=0; i<m; i++) {
            // vector<char>temp1, temp2;
            map<char, int>mp1, mp2;
            charMapping(pattern, words[i], mp1, mp2);
            if(!isMatchingStrings(pattern, words[i], mp1, mp2)){
                continue; 
            }

            unordered_map<char, int> temp;
            for(int j=0; j<words[i].length(); j++){
                temp[words[i][j]]++;
            }
            int cnt = 0;
            for(int k=0; k<n; k++){
                if(mp.size() == temp.size()){
                    if(mp[pattern[k]] == temp[words[i][k]]){
                        cnt++;
                    } else {
                        break;
                    }
                }
            }
            if(cnt==words[i].length()){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};