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
    void traverse(TreeNode* root, int &k, int &ans, int &cnt) {
    if (!root) return;
    
    traverse(root->left, k, ans, cnt); 
    cnt++;
    if(k==cnt) {
        ans = root->val;
        return;
    } 
    traverse(root->right, k, ans, cnt); 
    // return 0;
}
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0, cnt=0;
        traverse(root, k, ans, cnt);
        // sort(v.begin(), v.end());
        // return v[k-1];
        return ans;
    }
};