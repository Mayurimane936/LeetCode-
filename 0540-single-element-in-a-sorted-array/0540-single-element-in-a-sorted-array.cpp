class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        int mid;
        int ans = 0;
        if(n%2==0){
            return ans;
        }
        while(low<high){
            mid = low + (high-low)/2;
            if(mid%2==1){
                mid --;
            }
            if(nums[mid]==nums[mid+1]){
                low = mid+2;
            }else{
                high = mid;
            }
        }
        return nums[low];
    }
};