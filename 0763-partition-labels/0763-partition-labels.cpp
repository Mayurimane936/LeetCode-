class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int n = s.length();
        int i = 0;
        string m = s;

        while(i < n) {
            int cnt = i;  
            int j = 0;
            while(j < n){
                if(s[i] == s[j]){
                    cnt = max(cnt, j);
                }
                j++;
            }
            
            int k = i;
            while(k <= cnt){
                j = 0;
                while(j < n){
                    if(s[k] == s[j]){
                        cnt = max(cnt, j);
                    }
                    j++;
                }
                k++;
            }

            string temp = "";
            for(int k = i; k <= cnt; k++) {
                temp.push_back(s[k]);
            }

            ans.push_back(temp.size());
            i = cnt + 1;

            cout<<"cnt "<<cnt<<" "<<temp<<" "<<i<<" "<<m<<endl;
        }

        return ans;
    }
};