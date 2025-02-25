class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.length();
        int m = stones.length();

        set<int> s;
        int ans = 0;
        for(int i=0; i<n; i++) {
            s.insert(jewels[i]);
        }
        for(int i=0; i<m; i++) {
            if(s.find(stones[i])!=s.end()){
                ans++;
            }
        }
        return ans;
    }
};