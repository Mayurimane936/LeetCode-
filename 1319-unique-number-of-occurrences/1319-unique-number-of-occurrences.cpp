class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mp;
        for(int i=0; i<n; i++) {
            mp[arr[i]]++;
        }

        int prev = 0;
        vector<int> v;
        for(auto ele: mp) {
            v.push_back(ele.second);
        }
        sort(v.begin(), v.end());

        for(auto ele: v) {
            if(ele == prev) {
                return false;
            }else {
                prev = ele;
            }
        }
        return true;
    }
};