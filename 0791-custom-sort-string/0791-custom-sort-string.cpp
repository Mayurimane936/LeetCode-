class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        int n = order.length();
        int m = s.length();
        int index = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(order[i]==s[j]){
                    index++;
                    ans+=s[j];
                }
            }
        }
        string temp = "";
        for (int i = 0; i < m; i++) {
            if (ans.find(s[i]) == string::npos) {
                temp += s[i];
            }
        }
        // cout<<"temp "<<temp<<endl;
        ans+=temp;
        return ans;
    }
};