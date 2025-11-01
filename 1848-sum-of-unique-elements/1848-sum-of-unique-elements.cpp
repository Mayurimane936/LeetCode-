class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
      
        int ans = 0;
        for(auto ele: mp) {
            if(ele.second==1){
                ans += ele.first;
            }
        }
        return ans;
    }
};