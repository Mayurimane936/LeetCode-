class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>>ans;
        // int n = strs.size();
        // for(int i=0; i<n; i++) {
        //     vector<string>matches;
        //     string temp1 = strs[i];
        //     if(temp1!="NO"){
        //     matches.push_back(strs[i]);
        //     strs[i]="NO";
        //     }
        //     sort(temp1.begin(), temp1.end());
        //     for(int j=0; j<n; j++) {
        //         string temp2 = strs[j];
        //         sort(temp2.begin(), temp2.end());
        //         if(temp1==temp2 && i!=j && strs[j]!="NO") {
        //             matches.push_back(strs[j]);
        //             strs[j]="NO";
        //         }
        //     }
        //     if(matches.size()!=0){
        //         ans.push_back(matches);
        //     }
        // }
        // return ans;
        unordered_map<string, vector<string>> ans;

        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& entry : ans) {
            result.push_back(entry.second);
        }
        return result;        
    }
};