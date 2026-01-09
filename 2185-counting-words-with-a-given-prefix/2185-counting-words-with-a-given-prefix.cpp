class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int n = words.size();
        int k = pref.length();
        for(int i=0; i<n; i++) {
            int m = words[i].length();
            int cnt = 0;
            for(int j=0, s=0; j<m, s<k; j++){
                // cout<<"pref "<<pref[i]<<" "<<words[i][j]<<endl;
                if(pref[s]==words[i][j]){
                    cnt++;
                    s++;
                }else{
                    break;
                }
            }
            if(cnt == pref.length()){
                ans++;
            }
        }
        return ans;
    }
};