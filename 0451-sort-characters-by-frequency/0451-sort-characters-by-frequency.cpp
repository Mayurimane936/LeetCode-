class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        int n = s.length();
        map<char, int>mp;
        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }
        vector<pair<int, char>>temp;
        for(auto ele: mp) {
            temp.push_back({ele.second, ele.first});
        }
        sort(temp.rbegin(),temp.rend());
        for(int i=0; i<temp.size(); i++) {
            while(temp[i].first>0){
                ans.push_back(temp[i].second);
                temp[i].first--;
            }
        }
        return ans;
    }
};