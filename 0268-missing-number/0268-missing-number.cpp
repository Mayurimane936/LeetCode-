class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++) {
            cout<<"nums[i] outside"<<nums[i]<<" "<<i<<endl;
            if(nums[i]!=i){
                cout<<"nums[i] inside"<<nums[i]<<" "<<i<<endl;
                ans = i;
                break;
            }
        }
        if(ans == 0) ans = n;
        if(n==1 && nums[0]!=0)  ans=0;
        if(nums[0]!=0)  ans=0;
        return ans;
    }
};