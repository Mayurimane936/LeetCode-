class Solution {
    int addnum(int num){
        int x = num;
        int ans = 0;
        while(x) {
            int rem = x%10;
            ans+=rem;
            x=x/10;
        }
        return ans;
    }
public:
    int addDigits(int num) {
        int ans = addnum(num);
        while(ans) {
            if(ans>9){
                ans = addnum(ans) ;
            }else{
                return ans;
            }
        }
        return 0;
    }
};