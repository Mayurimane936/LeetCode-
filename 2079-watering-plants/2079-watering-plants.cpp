class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0;
        int n = plants.size();
        int i = 0;
        int cap = capacity;
        while(i<n) {
            if(cap == capacity && i!=0){
                cap = cap-plants[i];
                cout<<"i"<<i<<endl;
                ans+=i;
                i++;
            }
            else if(cap>=plants[i]){
                cap = cap-plants[i];
                i++;
                ans++;
                cout<<"cap"<<cap<<endl;
                cout<<"ans"<<ans<<endl;
            }else {
                ans+=abs(-1-i);
                cout<<"ans in else"<<ans<<endl;
                cap = capacity;
                cout<<"cap"<<cap<<endl;
            }
        }
        return ans;
    }
};