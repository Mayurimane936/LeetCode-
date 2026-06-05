class Solution {
    bool checkIfAirthmeticSubArray(vector<int>&nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n <= 2) {
            return true;
        }
        int diff = nums[1] - nums[0];
        for (int i = 1; i < n - 1; i++) {
            if (nums[i + 1] - nums[i] != diff) {
                return false;
            }
        }
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int n = nums.size();
        int m = l.size();

        for(int i=0; i<m; i++) {
            vector<int>temp;
            for(int j=l[i]; j<=r[i]; j++) {
                cout<<nums[j];
                temp.push_back(nums[j]);
            }
            cout<<endl;
            if(checkIfAirthmeticSubArray(temp)){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};