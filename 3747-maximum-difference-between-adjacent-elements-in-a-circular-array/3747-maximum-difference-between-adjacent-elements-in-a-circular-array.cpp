class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for(int i=0; i<n-1; i++) {
            ans = max(abs(nums[i]-nums[i+1]), ans);
        }
         ans = max(ans, abs(nums[0]-nums[n-1]));
         return ans;
    }
};