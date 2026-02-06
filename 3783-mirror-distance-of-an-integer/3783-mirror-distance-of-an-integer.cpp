class Solution {
    int reverseInt(int n) {
        int reversed = 0;

        while (n != 0) {
            int digit = n % 10;              
            reversed = reversed * 10 + digit;
            n = n / 10;                      
        }

        return reversed;
    }

public:
    int mirrorDistance(int n) {
        return abs(n-reverseInt(n));
    }
};