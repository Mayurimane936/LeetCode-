class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.length();
        string ans = "";
        for(int i=0; i<n; i++) {
            if(address[i]=='.') {
                ans = ans + "[.]";
            }else {
            ans.push_back(address[i]);
            }
        }
        return ans;
    }
};