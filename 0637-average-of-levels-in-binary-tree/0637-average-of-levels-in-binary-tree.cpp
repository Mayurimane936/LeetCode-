/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            vector<double> levels;
            int n = q.size();
            for(int i=0; i<n; i++) {
                TreeNode* curr = q.front();
                levels.push_back(curr->val);
                q.pop();
                if(curr->left) {
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            double avg = 0;
            for(int i=0; i<levels.size(); i++) {
               avg = avg+levels[i];
            }
            ans.push_back(avg/n);
        }
        return ans;
    }
};