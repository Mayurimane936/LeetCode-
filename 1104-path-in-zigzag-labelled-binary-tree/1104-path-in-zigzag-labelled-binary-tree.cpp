class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>ans;
        int n = label;
        int totalNodes = 0;
        int level = 0;
        int j = 0;
        vector<vector<int>>tree;

        for(int i=0; i<n; i++) {
            if(totalNodes>=label) {
                break;
            }else{
                int temp = pow(2, i);
                totalNodes+=temp;
                level++;
                vector<int>nodes;
                while(temp) {
                    j++;
                    nodes.push_back(j);
                    temp--;
                }
                tree.push_back(nodes);
            }
        }
      
        for(int i=0; i<tree.size(); i++) {
            if(i%2==1){
                reverse(tree[i].begin(), tree[i].end());
            }
        }
        int k = tree.size();
        int index = 0;
        for(int i=0; i<tree[k-1].size(); i++) {
            if(tree[k-1][i]==label){
                index = i;
                ans.push_back(label);
            }
        }
        for(int i=tree.size()-2; i>=0; i--) {
            index = index/2;
            ans.push_back(tree[i][index]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};