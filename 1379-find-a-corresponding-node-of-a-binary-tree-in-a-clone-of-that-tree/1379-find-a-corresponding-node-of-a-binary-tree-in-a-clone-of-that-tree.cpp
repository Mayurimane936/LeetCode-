/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    void traverseTree(TreeNode* cloned, TreeNode* target, TreeNode* &ans){
        if(cloned->left){
            traverseTree(cloned->left, target, ans);
        }
        // cout<<"target "<<target->val<<" cloned "<<cloned->val<<endl;
        if(target->val==cloned->val){
            ans = cloned;
            return;
        }
        if(cloned->right){
            traverseTree(cloned->right, target, ans);
        }
    }

public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!cloned) {
            return NULL;
        }
        TreeNode *ans = cloned;
        traverseTree(cloned, target, ans);
        return ans;
    }
};