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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool isLeft = true;
        while(!q.empty()) {
            vector<int>level;
            int n = q.size();
            for(int i=0; i<n; i++) {
                TreeNode* curr = q.front();
                level.push_back(curr->val);
                q.pop();
                if(curr->left) {
                    q.push(curr->left);
                }
                if(curr->right) {
                    q.push(curr->right);
                }
            }
            if(isLeft) {
                isLeft = false;
            }else {
                reverse(level.begin(), level.end());
                isLeft = true;
            }
            ans.push_back(level);
        }
        return ans;
    }
};