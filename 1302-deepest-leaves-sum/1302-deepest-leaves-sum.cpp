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
    int prevDepth = 0;
    void traverse(TreeNode* root, int &sum, int depth){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            if(depth > prevDepth){
                sum = root->val;
                prevDepth = depth;
            }
            else if(depth == prevDepth){
                sum += root->val;
            }
        }
        traverse(root->left, sum, depth + 1);
        traverse(root->right, sum, depth + 1);
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int depth = 0;
        traverse(root, sum, depth);
        return sum;
    }
};