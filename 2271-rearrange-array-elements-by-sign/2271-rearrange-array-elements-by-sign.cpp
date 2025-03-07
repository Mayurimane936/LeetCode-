class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans; 
        vector<int>pos;
        vector<int> neg;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i]>0) {
            pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }
        int m = pos.size();
       for(int i=0; i<m; i++) {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
       }
        return ans;
    }
};