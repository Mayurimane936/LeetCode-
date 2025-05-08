class Solution {
public:
    int maximum69Number (int num) {
        string ans = to_string(num);
        int n = ans.length();
        for(int i=0; i<n; i++) {
            if(ans[i]=='6') {
                ans[i]= '9';
                break;
            }
        }
        cout<< ans;
        return stoi(ans);
      
    }
};