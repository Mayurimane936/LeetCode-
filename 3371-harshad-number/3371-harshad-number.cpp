class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int numb = x;
        int sum = 0;
        while(numb) {
            int digit = numb%10;
            sum+=digit;
            numb=numb/10;
        }
        if(x%sum==0) {
            return sum;
        }
        return -1;
    }
};