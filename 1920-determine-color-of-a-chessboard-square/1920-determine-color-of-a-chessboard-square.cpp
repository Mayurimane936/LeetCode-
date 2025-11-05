class Solution {
public:
    bool squareIsWhite(string coordinates) {
        cout<<coordinates[0] - 97<<endl;
        cout<<int(coordinates[1]) <<endl;
        int ans = (coordinates[0] - 97)+(int(coordinates[1]));
        cout<<ans<<endl;
        if(ans%2==0){
            return true;
        }
        return false;
    }
};