class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt = 0;
        int cnt1 = 0;
        int n = moves.length();
        for(int i=0; i<n; i++) {
            if(moves[i]=='U') {
                cnt+=1;
            }else if(moves[i]=='D') {
                cnt--;
            }else if(moves[i]=='R'){
                cnt1++;
            }else{
                cnt1--;
            }
        }
        if(cnt==0 && cnt1==0){
            return true;
        }
        return false;
    }
};