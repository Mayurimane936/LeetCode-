class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        vector<int> temp;
        int i=0; int j=n;
        while(i<n && j<s) {
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            i++;
            j++;
        }
        return temp;
    }
};