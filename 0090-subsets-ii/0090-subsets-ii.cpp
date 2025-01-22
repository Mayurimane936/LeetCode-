class Solution {
private:
    void func(vector<int>& nums, int index, int n, vector<int>&subset, set<vector<int>>&ans) {
        if(index==n) {
            ans.insert(subset);
            return;
        }
        //pick 
        subset.push_back(nums[index]);
        func(nums, index+1, n, subset, ans);
        //not pick
        subset.pop_back();
        func(nums, index+1, n, subset, ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> subset;
        func(nums, 0, nums.size(),subset,ans);
        vector<vector<int>> v(ans.begin(), ans.end());
        return v;
    }
};