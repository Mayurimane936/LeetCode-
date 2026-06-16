class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int aliceCnt = 0;
        int bobCnt = 0;
        int i = 0; int j = n-1;
        bool isAliceTurn = true;
        while(i<n && j>=0) {
            if(isAliceTurn){
               if(piles[i]>piles[j]){
                    aliceCnt += piles[i];
                    piles[i] = -1;
                    i++;
               }else{
                    aliceCnt += piles[j];
                    piles[j] = -1;
                    j--;
               }
            }else {
                if(piles[i]>piles[j]){
                    bobCnt += piles[i];
                    piles[i] = -1;
                    i++;
               }else{
                    bobCnt += piles[j];
                    piles[j] = -1;
                    j--;
               }
            }
        }
        return aliceCnt>bobCnt;
    }
};