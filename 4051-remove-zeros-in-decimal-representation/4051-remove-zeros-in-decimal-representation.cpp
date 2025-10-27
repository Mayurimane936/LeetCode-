class Solution {
public:
    long long removeZeros(long long n) {
      std::string str_num = std::to_string(n);
      int m = str_num.length();
      string ans = "";
      cout<<str_num<<endl;

      for(int i=0; i<m; i++) {
        if(str_num[i]!='0') {
            ans.push_back(str_num[i]);
        }
      }
      long long int_num = std::stoll(ans);
      cout<<int_num<<endl;
      return int_num;
    }
};