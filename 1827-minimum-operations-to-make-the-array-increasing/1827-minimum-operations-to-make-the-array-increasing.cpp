class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                while(nums[j]<=nums[i]){
                    nums[j]+=1;
                    ans++;
                }
            }
        }
        return ans;
    }
};