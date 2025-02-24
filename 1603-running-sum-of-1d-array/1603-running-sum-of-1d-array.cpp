class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        if(nums.size()>=1) {
        ans.push_back(nums[0]);
        }
        for(int i=1; i<n; i++) {
           ans.push_back(ans[i-1]+nums[i]); 
        }
        return ans;
    }
};