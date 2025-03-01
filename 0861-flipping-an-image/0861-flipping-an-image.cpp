class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      vector<vector<int>> ans;
      for(int i=0; i<image.size(); i++) {
        reverse(image[i].begin(), image[i].end());
      }

      for(int i=0; i<image.size(); i++) {
        vector<int> tmp;
        for(int j=0; j<image[0].size(); j++) {
            if(image[i][j]==0) {
                tmp.push_back(1);
            }else{
                tmp.push_back(0);
            }
        }
        ans.push_back(tmp);
      }
      return ans;
    }
};