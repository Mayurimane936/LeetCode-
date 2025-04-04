class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxele = INT_MIN;
        for(int i=0; i<candies.size(); i++) {
            maxele = max(maxele, candies[i]);
        }
        int n = candies.size();
        vector<bool>ans(n);
        for(int i=0; i<candies.size(); i++) {
          if(candies[i]+extraCandies >= maxele) {
            ans[i] = true;
          }else {
            ans[i] = false;
          }
        }
        return ans;
    }
};