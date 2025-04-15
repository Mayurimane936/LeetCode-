class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string finals = "";
        int n = strs.size();
        if(n==1){
            return strs[0];
        }
        string temp = strs[0];
        int j = 0; int m=temp.length(); int i=0;
        for(int i=1; i<n; i++) {
            string curr = strs[i];
            int k = 0; int len = curr.length();
            while(j<m && k<len) {
                if(temp[j]==curr[k]) {
                    ans.push_back(curr[k]);
                    j++;
                    k++;
                }else {
                    break;
                }
            }
            temp = ans;
            ans = "";
            m = temp.length();
            j=0;
        }
        return temp;
    }
};