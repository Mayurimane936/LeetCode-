class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        for(int i=0; i<nums.size(); i++) {
            int cnt = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt==n){
                return nums[i];
            }
        }
        return 0;
    }
};