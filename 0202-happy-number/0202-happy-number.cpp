class Solution {
     int addnum(int num){
        int x = num;
        int ans = 0;
        while(x) {
            int rem = x%10;
            ans+=rem*rem;
            x=x/10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        map<int,int>mp;
        mp[n]++;
        int ans = addnum(n);
        while(ans) {
            if(mp[ans]!=0){
                cout<<"ans in mp"<<ans<<" "<<mp[ans];
                return false;
            }else if(ans==1){
                return true;
            }else {
            mp[ans]++;
            ans = addnum(ans);
            }
        }
        return false;
    }
};