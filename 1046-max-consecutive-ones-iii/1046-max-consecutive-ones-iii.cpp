class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0, right=0, maxlen =0, len=0, zeroes=0;
        while(right<n) {
            if(nums[right]==0) {
                zeroes++;
            }
            if(zeroes>k) {
                if(nums[left]==0) {
                    zeroes--;
                }
                left++;
            }
            if(zeroes<=k) {
                len= right-left+1;
                maxlen = max(len, maxlen);
            }
            right++;
        }
    return maxlen;
    }
};