class Solution {
  int reverseInt(int n) {
    int rev = 0;
    while (n != 0) {
        int rem = n % 10;   
        rev = rev * 10 + rem;
        n = n / 10;      
    }
    return rev;
}
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
            st.insert(reverseInt(nums[i]));
        }
        return st.size();
    }
};