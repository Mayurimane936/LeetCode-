class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxVal = 0;
        for(int i=0; i<n; i++){
            if(i>maxVal){
               return false;
            }
            maxVal = max(maxVal, i+nums[i]);
        }
        return true;
    }
};