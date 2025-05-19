class Solution {
public:
    string triangleType(vector<int>& nums) {
            if((nums[0] + nums[1] > nums[2]) && (nums[0] + nums[2] > nums[1]) && (nums[1] + nums[2] > nums[0])){
               cout<<"correct";
            }else {
                return "none";
            }
        
        unordered_map<int, int>mp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }
        if(mp.size()==3) {
            return "scalene";
        }else if(mp.size()==2) {
            return "isosceles";
        }else if(mp.size()==1){
            return "equilateral";
        }
       
        return "none";
    }
};