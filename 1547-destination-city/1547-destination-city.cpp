class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int>mp;
        int n = paths.size();
        string ans = "";
        for(int i=0; i<n; i++) {
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        for(int i=0; i<n; i++) {
            if(mp[paths[i][1]]==1) {
                ans = paths[i][1];
                break;
            }
        }
        return ans;
    }
};