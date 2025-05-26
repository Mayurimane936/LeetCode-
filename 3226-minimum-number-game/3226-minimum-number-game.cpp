class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i+=2) {
            int alice = nums[i];
            int bob = nums[i+1];
            ans.push_back(bob);
            ans.push_back(alice);
        }
        return ans;
    }
};