class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int temp = original;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==temp) {
                temp = temp*2;
            }
        }
        return temp;
    }
};