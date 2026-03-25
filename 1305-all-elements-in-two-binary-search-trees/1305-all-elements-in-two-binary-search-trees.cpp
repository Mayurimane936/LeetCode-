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
    void traverse(TreeNode* root1,   vector<int>&ans){
        if(!root1){
            return;
        }
        traverse(root1->left, ans);
        ans.push_back(root1->val);
        traverse(root1->right, ans);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        traverse(root1, ans);
        traverse(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};