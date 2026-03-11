class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        set<int>st;
        for(int i=0; i<n; i++) {
            st.insert(groupSizes[i]);
        }
        vector<vector<int>>ans;
        for(auto ele:st){
            vector<int>temp;
            for(int i=0; i<n; i++){
                if(ele==groupSizes[i] && temp.size()<groupSizes[i]){
                    temp.push_back(i);
                }
                else if(ele==groupSizes[i] && temp.size()>=groupSizes[i]){
                    ans.push_back(temp);
                    temp.clear();
                    temp.push_back(i);
                }
            }
            ans.push_back(temp);
            // st.erase(ele);
        }
        return ans;
    }
};