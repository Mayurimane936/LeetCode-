class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxele = INT_MIN;
        int minele = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++) {
             maxele = max(nums[i], maxele);
             minele = min(nums[i], minele);
        }
        for(auto ele: nums) {
            if(ele!=maxele && ele!=minele){
                cout<<maxele<<endl;
                cout<<minele<<endl;
                cout<<ele;
                return ele;
            }
        }
    return -1;
    }
};