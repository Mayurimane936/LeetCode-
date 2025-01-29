class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        int temp = x;
        long long ans = 0;
        while(temp>0) {
            int digit = temp%10;
            ans = ans*10 + digit;
            temp = temp/10;
        }
        if(ans>INT_MAX) {
            return false;
        }
        return ans == x;
    }
};