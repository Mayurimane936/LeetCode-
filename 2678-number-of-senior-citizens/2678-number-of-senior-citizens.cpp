class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(int i=0; i<details.size(); i++){
            string temp = "";
            temp.push_back(details[i][11]);
            temp.push_back(details[i][12]);
            cout<<"data"<<temp<<endl;
            if(temp>"60"){
                cnt++;
            }   
        }
        return cnt;
    }
};