class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        int n = operations.size();
        vector<int> temp;
        for(int i=0; i<n; i++) {
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
                temp.push_back(stoi(operations[i]));
            }else if(operations[i]=="C"){
                temp.pop_back();
            }else if(operations[i]=="D"){
                temp.push_back(temp[temp.size()-1]*2);
            }else{
                temp.push_back(temp[temp.size()-1]+temp[temp.size()-2]);
            }
        }
        for(int i=0; i<temp.size(); i++) {
            ans+=temp[i];
        }
        return ans;
    }
};