class Solution {
public:
    bool isPerfectSquare(int num) {
        long start = 1;
        long end = num;
        long mid;
        while(start<=end) {
            mid = start+(end-start)/2;
            if(mid*mid == num) {
                return true;
            }else if(mid*mid > num) {
                end = mid-1;
            }else {
                start = mid+1;
            }
        }
        return false;
    }
};