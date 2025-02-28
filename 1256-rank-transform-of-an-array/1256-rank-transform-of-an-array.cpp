class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> temp;
       vector<int> ans;
       temp = arr;
       int rank = 1;
       map<int, int> mp;
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++) {
            if(mp.find(temp[i])==mp.end()) {
                mp[temp[i]] = rank;
                rank++;
            }      
        }
        for(int i=0; i<arr.size(); i++) {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};