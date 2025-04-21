class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> st;
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0; int j = 0;
        while(i<n && j<m) {
            if(nums1[i]==nums2[j]) {
                st.insert(nums2[j]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]) {
                j++;
            }else{
                i++;
            }
            
        }
        for(auto it:st) {
            ans.push_back(it);
        }
        return ans;
    }
};