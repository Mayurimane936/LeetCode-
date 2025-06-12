class Solution {
public:
    int pivotInteger(int n) {
       int lsum = 0, rsum =(n*(n+1)/2);
       int i = 0;
       while(lsum<=rsum) {
        if(lsum==rsum-i) {
            return i;
        }
        lsum+=i;
        rsum-=i;
        i++;
       }
       return -1;
    }
};