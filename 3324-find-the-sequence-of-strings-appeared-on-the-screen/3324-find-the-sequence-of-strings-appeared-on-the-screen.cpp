class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string temp = "";

        for (int i=0; i<target.size(); i++) {
            temp += 'a';
            int prev = temp.length() - 1;
            ans.push_back(temp);

            while (temp[prev] != target[i]) {
                temp[prev]++;
                // cout<<"temp "<<temp<<" temp ptrev "<<temp[prev]<<endl;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};