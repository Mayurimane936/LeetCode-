class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int cnt = 0;
            while(nums[i]) {
                int digit = nums[i]%10;
                // cout<<digit<<" "<<endl;
                cnt++;
                nums[i] = nums[i]/10;
                // cout<<nums[i]<<" "<<endl;

            }
            if(cnt%2==0) {
                ans++;
            }
        }
        return ans;
    }
};