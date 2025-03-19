class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int hash[3] = {-1, -1, -1};  
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            hash[s[i] - 'a'] = i; 
            
            if (hash[0] != -1 && hash[1] != -1 && hash[2] != -1) {
                int minIndex = min({hash[0], hash[1], hash[2]});
                cnt += minIndex + 1; 
            }
        }
        
        return cnt;
    }
};
