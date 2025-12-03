class Solution {
public:
    int reverseNum(int n) {
    int reversed = 0;
    
    while(n != 0) {
        int digit = n % 10;           
        reversed = reversed * 10 + digit; 
        n = n / 10;                   
    }
    return reversed;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        map<int, vector<int>>mp;
        for(int i=0; i<n; i++) {
            mp[nums[i]].push_back(i);
        }
        
        for(int i=0; i<n; i++) {
            int reversedNum = reverseNum(nums[i]);
                for(auto ele: mp[reversedNum]){
                    if(ele>i){
                    ans = min(ans , abs(i-ele));
                    if(ans == 1)    return ans;
                    }
                }
        }
        return ans == INT_MAX ?-1: ans;
    }
};