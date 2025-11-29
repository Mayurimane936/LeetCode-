class Solution {
    int addNum(int num){
        int ans = 0;
        while(num){
            ans+=num%10;
            num/=10;
        }
        return ans;
    }
public:
    int countEven(int num) {
        int ans = 0;
        if(num<=9){
            for(int i=1; i<=num; i++) {
                cout<<"num"<<num%2<<" "<<num<<endl;
                if(i%2==0){
                    ans++;
                }
            }
        }else {
            for(int i=1; i<=num; i++) {
                cout<<addNum(i)%2;
                if(addNum(i)%2==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};