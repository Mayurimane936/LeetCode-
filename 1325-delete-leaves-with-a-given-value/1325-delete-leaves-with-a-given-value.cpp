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
    bool checkIfLeafNode(TreeNode* root){
        return (!root->left && !root->right);
    }
    TreeNode* traverse(TreeNode* root, int target){
        if(!root){
            return NULL;
        }
        root->left = traverse(root->left, target);
        root->right = traverse(root->right, target);
        if(root->val==target){
          if(checkIfLeafNode(root)){
            return nullptr;
          }
        }
        return root;
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return traverse(root, target);
    }
};