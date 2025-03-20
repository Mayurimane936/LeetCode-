class Solution {
public:
    int solve(vector<int> nums, int k) {
        int n = nums.size();
        int r=0, l=0, cnt=0;
        map<int, int> mp;
        while(r<n) {
            mp[nums[r]]++;
            while(mp.size()>k) {
                mp[nums[l]]--;
                if(mp[nums[l]]==0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            cnt = cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int cnt = solve(nums, k)-solve(nums, k-1);
        return cnt;
    }
};