class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        string s1 = "";
        int ans = INT_MAX;
        for(int i=0; i<n; i+=2){
            s1 += to_string(nums[i]);
            if (i + 1 < n) {
                s1 += to_string(nums[i + 1]);
            }
            ans = min(ans, stoi(s1));
            s1 = "";
        }
        if(s1.length()>0){
            ans = min(ans, stoi(s1));
        }
        return ans;
    }
};