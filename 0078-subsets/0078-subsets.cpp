class Solution {
private:
   void func(vector<int>& nums, vector<vector<int>> &ans, vector<int>&subset, int index, int n) {
        if(index == n) {
            ans.push_back(subset);
            return;
        }
        //pick
        subset.push_back(nums[index]);
        func(nums,ans, subset, index+1, n);
        //not pick 
        subset.pop_back();
        func(nums,ans, subset, index+1, n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>subset;
        func(nums, ans, subset, 0, nums.size());
        return ans;
    }
};