class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        if(n<=1){
            return 0;
        }
        vector<int>temp(n);
        for(int i=0; i<n; i++) {
            int m = bank[i].length();
            int cnt = 0;
            for(int j=0; j<m; j++) {
                if(bank[i][j]=='1'){
                    // cout<<"bankk "<<bank[i][j]<<endl;
                    cnt++;
                }
            }
            cout<<"temp[i] "<<temp[i] <<" "<<"cnt"<<cnt<<endl;
            temp[i]=cnt;
        }
        int ans = 0;
        temp.erase(std::remove(temp.begin(), temp.end(), 0), temp.end());
        if(temp.size()==0){
            return 0;
        }
        
        for(int i = 0; i < temp.size() - 1; i++) {
            int j = i + 1;
            int temps = 1;
            
            // j is already within bounds due to loop condition
            if(temp[i] != 0 && temp[j] != 0) {
                temps = temp[i] * temp[j];
                ans = ans + temps;
                cout << "ans = " << ans << endl;
            }
        }
        return ans;
    }
};