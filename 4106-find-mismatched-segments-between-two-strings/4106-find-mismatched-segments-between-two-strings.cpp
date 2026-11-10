
class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n = s1.length();

        vector<vector<string>> ans;

        int i = 0, j = 0;

        string str = "";
        string str2 = "";

        while (i < n && j < s2.length()) {

            if (s1[i] == s2[j]) {

                if (!str.empty()) {
                    ans.push_back({str, str2});

                    str = "";
                    str2 = "";
                }

                i++;
                j++;
            }
            else {
                str.push_back(s1[i]);
                str2.push_back(s2[j]);

                i++;
                j++;
            }
        }

        if (!str.empty()) {
            ans.push_back({str, str2});
        }

        return ans;
    }
};
