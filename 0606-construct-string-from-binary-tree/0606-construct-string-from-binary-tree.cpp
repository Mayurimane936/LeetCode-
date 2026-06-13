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
    void treeTraversal(TreeNode* root, string &ans){
        // cout<<"root->val"<<root->val<<endl;
        if(ans == ""){
            ans+=to_string(root->val);
        }
        else if(ans!=""){
           ans = ans + "(" + to_string(root->val); 
        }
        if(!root->left && root->right){
            ans += "()";
        }
        if(root->left){
            treeTraversal(root->left, ans);
        }
        if(root->right){
            treeTraversal(root->right, ans);
        }
        ans += ")";
    }
    
public:
    string tree2str(TreeNode* root) {
        string ans = "";
        if(!root){
            return ans;
        }
        treeTraversal(root, ans);
        ans.pop_back();
        return ans;
    }
};