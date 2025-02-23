class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) {
            return x;
        }
        int start = 1;
        int end = x;
        long long mid;
        int ans;
        while(start<=end) {
            mid = start+(end-start)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid>x) {
                end = mid-1;
            }else {
                start=mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};