class Solution {
public:
    int countPoints(string rings) {
        int ans = 0;
        int n = rings.length();
        map<int, set<char>>mp;
        for(int i=0; i<n; i+=2){
            int rod = int(rings[i+1]);
            mp[rod].insert(rings[i]); 
        }

        for(auto ele: mp) {
            if(ele.second.size()==3){
                ans++;
            }
        }
        return ans;
    }
};