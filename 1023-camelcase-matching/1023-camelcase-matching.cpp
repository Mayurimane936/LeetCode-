class Solution {
   bool checkIfCriteriaMatches(string word, string pattern, int m, string cl){
    int n = word.length();
    int j = 0;
    for(int i = 0; i < n; i++){
        if(j < m && word[i] == pattern[j]){
            j++;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z'){
            return false;
        }
    }
    return j == m;
}
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;
        int n = queries.size();
        int m = pattern.length();
        string cl = "";
        for(int i=0; i<m; i++) {
            if(pattern[i]>='A' && pattern[i]<='Z'){
                cl+=pattern[i];
            }
        }
        for(int i=0; i<n; i++) {
            bool anss = checkIfCriteriaMatches(queries[i], pattern, m, cl);
            ans.push_back(anss);
        }
        return ans;
    }
};