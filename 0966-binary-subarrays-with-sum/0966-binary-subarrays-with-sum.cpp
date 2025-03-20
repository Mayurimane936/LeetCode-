class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt= func(nums, goal)-func(nums, goal-1);
        return cnt;
    }

    int func(vector<int>& nums, int goal){
        int n = nums.size();
        int l=0, r=0; long long sum=0; int cnt=0;

        if(goal<0) {
            return 0;
        }
        while(r<n) {
            sum = sum+nums[r];
            while(sum>goal){
                sum = sum-nums[l];
                l++;
            }
           
            cnt = cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
};