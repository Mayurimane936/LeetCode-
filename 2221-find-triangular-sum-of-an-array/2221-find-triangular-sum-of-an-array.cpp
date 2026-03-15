class Solution {
  int istriangularSum(vector<int>& nums) {
        while(nums.size() > 1) {
            vector<int> newNums;
            for(int i = 0; i < nums.size() - 1; i++) {
                newNums.push_back((nums[i] + nums[i+1]) % 10);
            }
            nums = newNums; 
        }
        return nums[0];
    }
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        return istriangularSum(nums);
    }
};