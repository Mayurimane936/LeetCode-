class Solution {
    int dsumm(int i){
        int dsum = 0;
        while(i){
            int rem = i%10;
            dsum+=rem;
            i/=10;
        }
        return dsum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int dsum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(nums[i]>9){
                dsum+=dsumm(nums[i]);
            }else{
                dsum+=nums[i];
            }
        }
        cout<<"sum "<<sum <<" "<<dsum<<endl;
        return abs(sum-dsum);
    }
};