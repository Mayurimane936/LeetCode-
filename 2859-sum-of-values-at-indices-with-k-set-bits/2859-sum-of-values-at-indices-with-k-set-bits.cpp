class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int setBits = 0;
            for(int j=0; j<32; j++) {
                if(i&(1<<j)){
                    setBits++;
                }
            }
            if(setBits==k){
                cout<<"ans "<<ans<<" "<<nums[i]<<" "<<setBits<<endl;
                ans+=nums[i];
            }
        }
        return ans;
    }
};