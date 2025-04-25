class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0]; int cnt = 1;
        for(int i=1; i<nums.size(); i++) {
            if(cnt == 0) {
                candidate = nums[i];
            }
            if(candidate == nums[i]) {
                cnt++;
            }else {
                cnt--;
            }
          
        }
        return candidate;
    }
};