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
    int depth(TreeNode* root) {
        if(!root) {
            return 0;
        }
        if(!root->left && !root->right) {
            return 1;
        }
        int left = depth(root->left);
        int right = depth(root->right);

        return max(left,right)+1;
    }
public:
    int maxDepth(TreeNode* root) {
        return depth(root);
    }
};