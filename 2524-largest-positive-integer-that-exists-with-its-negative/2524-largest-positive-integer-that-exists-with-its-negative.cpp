class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size()-1;
        while(start<end) {
            if(nums[start]+nums[end] == 0) {
                // ans = max(ans, nums[end]);
                // start++;
                // end--;
                return nums[end];
            }else if(nums[start]+nums[end]<0){
                start++;
            }else {
                end --;
            }
        }
    return ans;
    }
};