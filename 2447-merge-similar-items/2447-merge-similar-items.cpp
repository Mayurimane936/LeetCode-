class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n = items1.size();
        int m = items2.size();
        vector<vector<int>> v;
        map<int, int>mp;
        for(int i=0; i<n; i++) {
            mp[items1[i][0]]+=items1[i][1];
        }
        for(int i=0; i<m; i++) {
            mp[items2[i][0]]+=items2[i][1];
        }
        for(auto ele:mp) {
            v.push_back({ele.first, ele.second});
        }
        return v;
    }
};