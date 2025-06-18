class Solution {
public:
    bool isBalanced(string num) {
        int sum1 = 0;
        int sum2 = 0;
        int n = num.length();
        for(int i=0; i<n; i++) {
            if(i%2==0) {
                sum1+=num[i]-'0';
            }else {
                sum2+=num[i]-'0';
            }
        }
        return sum1 == sum2;
    }
};