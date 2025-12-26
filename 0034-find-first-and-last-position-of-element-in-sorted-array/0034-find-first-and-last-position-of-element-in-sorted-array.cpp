class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2, -1);
        int l = 0;
        int h = nums.size()-1;
        if(h==-1){
            return ans;
        }
        int mid = 0;
        while(l<=h) {
            mid = l + (h-l)/2;
            if(nums[mid]==target) {
                ans[0]=(mid);
                h = mid-1;
            }else if(nums[mid]<target){
               l = mid+1;
            }else{
                h=mid-1;
            }
        }
        l = 0;
        h = nums.size()-1;
        mid = 0;
        while(l<=h) {
            mid = l + (h-l)/2;
            if(nums[mid]==target) {
                ans[1] = (mid);
                l = mid+1;
            }else if(nums[mid]<target){
               l = mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};