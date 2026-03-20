class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        int n = s.length();
        int m = n/k;
        int d = k;
        int updatei = 0;
        for(int i=updatei; i<n; i+=k) {
        int temp = 0;
        updatei = i;
            for(int j=updatei; j<d+updatei; j++) {
                temp+=abs(s[j]-97);
                cout<<"temp"<<temp<<"d"<<d<<" "<<s[j]<<endl;
            }
            cout<<"tempvalue"<<temp<<"i "<<i<<endl;
            cout<<"tempppp "<<temp%26<< " " <<'a'<<endl;
            ans.push_back((temp%26) +'a');
        }
        return ans;
    }
};