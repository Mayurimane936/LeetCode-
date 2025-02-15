class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, e = n-1;
        while(i<=e) {
            swap(s[i], s[e]);
            i++;
            e--;
        }
       
    }
};