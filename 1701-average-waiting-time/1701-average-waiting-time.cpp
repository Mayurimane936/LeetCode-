class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double finishTime = 0;
        double waitTime = 0;
        double finalWait = 0;
        finishTime += customers[0][0] + customers[0][1];
        // cout<<"finishTime "<<finishTime<<endl;

        waitTime = finishTime - customers[0][0];
        finalWait += waitTime;
        // cout<<"finalWait "<<waitTime<<endl;

        for(int i=1; i<n; i++){
            if(customers[i][0]>finishTime){
                // cout<<"customers[i][0] "<<customers[i][0]<<"finishtime"<<finishTime<<endl;
                finishTime = (customers[i][0] + customers[i][1]);
                // cout<<"finishTimeee "<<finishTime<<endl;
            }else{
                finishTime += customers[i][1];
                // cout<<"finishTime "<<finishTime<<endl;
            }
            waitTime = abs(finishTime - customers[i][0]);
            finalWait += waitTime;
            // cout<<"finalWait "<<finalWait<<"customers[i][0] "<<customers[i][0]<<endl;

        }
        cout<<"finalWait enddddd"<<finalWait<<endl;
        return (double)finalWait/n;
    }
};