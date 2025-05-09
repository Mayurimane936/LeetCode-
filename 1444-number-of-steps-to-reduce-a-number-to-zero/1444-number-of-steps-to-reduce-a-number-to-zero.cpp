class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        int temp = num;
        while(temp) {
            if(temp%2==0) {
                temp = temp/2;
            }else {
                temp = temp-1;
            }
            ans++;
        }
        return ans;
    }
};