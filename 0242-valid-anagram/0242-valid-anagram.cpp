class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int start = 0;
        int end = s.length()-1;
        while(start<=end) {
            if(s[start] == t[start]) {
                start++;
            }
            else{
            return false;
            }
        }
        return true;
    }
};