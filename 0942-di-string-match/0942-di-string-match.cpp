class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> perm(n + 1);
        int low = 0;
        int high = n;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'I') {
                perm[i] = low++;
            } else {
                perm[i] = high--;
            }
        }
        perm[n] = low; 
        return perm;
    }
};
