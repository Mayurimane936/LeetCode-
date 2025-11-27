class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k==0){
            return;
        }
        for(int i=0; i<n-k; i++){
            int temp = nums[i];
            nums.push_back(temp);
        }
        nums.erase(nums.begin(), nums.begin() + (n-k));
      }
};