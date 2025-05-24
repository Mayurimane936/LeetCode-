class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans = 0;
        int n = edges.size();
        unordered_map<int, int>mp;
        for(int i = 0; i<n; i++) {
            mp[edges[i][1]]++;
        }

        for(int i=0; i<n; i++) {
            if(mp[edges[i][0]]>=1){
                ans = edges[i][0];
            }else if(mp[edges[i][1]]>=1) {
                ans= edges[i][1];
            }
        }
        return ans;
    }
};