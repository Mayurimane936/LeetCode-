class Solution {
public:
    int func(vector<int>& nums, int k) {
        if(k<0) {
            return 0;
        }
        int r=0, l=0,n=nums.size();
        int cnt = 0;
        long long sum = 0;
        while(r<n) {
            sum = sum + nums[r];
            while(sum>k) {
                sum = sum-nums[l];
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;

    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]%2==0) {
                arr.push_back(0);
            }else{
                arr.push_back(1);
            }
        }
        int cnt = func(arr, k)- func(arr, k-1);
        return cnt;
    }
};