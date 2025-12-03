
class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        auto checkPallindrome = [&](int a, int b) -> bool {
            while (a <= b) {
                if (s[a] != s[b])
                    return false;
                a++;
                b--;
            }
            return true;
        };
        while (l <= r) {
            if (s[l] != s[r]) {
                bool left = checkPallindrome(l + 1, r);
                bool right = checkPallindrome(l, r - 1);
                return left || right;
            }
            l++;
            r--;
        }
        return true;
    }
};