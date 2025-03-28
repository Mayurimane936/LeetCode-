class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid;

        while(start<=end) {
            mid = start+(end-start/2);
            if(nums[mid]<target) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return end+1;
    }
};