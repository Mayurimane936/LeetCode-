class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected(heights.begin(), heights.end());
        sort(expected.begin(), expected.end());
        int ans = 0;
        int n = heights.size();
        for(int i=0; i<n; i++) {
            if(expected[i]!=heights[i]){
                ans++;
            }
        }
        return ans;
    }
};