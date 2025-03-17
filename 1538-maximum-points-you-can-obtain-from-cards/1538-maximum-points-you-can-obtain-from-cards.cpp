class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxs=0, lsum=0, rsum=0;

        for(int i=0; i<=k-1; i++) {
            lsum = lsum+cardPoints[i];
        }
        maxs = lsum;

        int lindex = k-1;
        for(int i=n-1; i>=n-k; i--) {
            lsum = lsum - cardPoints[lindex];
            rsum = rsum + cardPoints[i];
            lindex = lindex - 1;
            maxs = max(maxs, lsum+rsum);
        } 
       return maxs;
    }
};