class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>anss;
        for(int i=0; i<=n; i++) {
            int ans = 0;
            for(int j=0; j<32; j++) {
                if(i&(1<<j)){
                    ans++;
                }
            }
            anss.push_back(ans);
        }
        return anss;
    }
};