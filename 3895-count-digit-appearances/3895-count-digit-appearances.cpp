class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            string temp = to_string(nums[i]);
            for(int j=0; j<temp.length(); j++){
                if(temp[j]==(digit + '0')){
                    ans++;
                }
            }
        }
        return ans;
    }
};