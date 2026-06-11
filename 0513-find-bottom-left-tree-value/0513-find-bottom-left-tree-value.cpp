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
    void traverseTree(TreeNode* root, int &ans, int height, int &maxHeight){
        if(!root){
            return;
        }
        if(!root->left && !root->right && height > maxHeight){
            maxHeight = height;
            ans = root->val;
        }
        traverseTree(root->left, ans, height+1, maxHeight);
        traverseTree(root->right, ans, height+1, maxHeight);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        int height = 0;
        int ans = 0;
        int maxHeight = INT_MIN;
        cout<<"maxHeight"<<maxHeight<<endl;
        traverseTree(root, ans, height, maxHeight);
        return ans;
    }
};