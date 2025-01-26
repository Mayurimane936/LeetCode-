class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        map<int, vector<int>> mp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            mp[nums[i]].push_back(i);
        }

        for(auto pr:mp) {
           for(int i=0; i<pr.second.size()-1; i++) {
                if(abs(pr.second[i]-pr.second[i+1])<=k){
                    return true;
                }
           }
        }
        return false;
    }
};