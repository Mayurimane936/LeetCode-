class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int n = arr1.size();
        int m = arr2.size();
        map<int, int>mp;
        for(int i=0; i<n; i++) {
            mp[arr1[i]]++;
        }
        vector<int>temp;
        for(int i=0; i<m; i++) {
            auto it = find(arr1.begin(), arr1.end(), arr2[i]); 
            if(it != arr1.end()) {
                int val = mp[arr2[i]];
                while(val>0){
                    ans.push_back(arr2[i]);
                    val--;
                }
            }
        }
        for(int i=0; i<n; i++) { 
            auto it = find(ans.begin(), ans.end(), arr1[i]); 
            if(it==ans.end()) {
                temp.push_back(arr1[i]);
            }
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++) {
            // cout<<ans[i]<<endl;
            ans.push_back(temp[i]);
        }
        return ans;
    }
};