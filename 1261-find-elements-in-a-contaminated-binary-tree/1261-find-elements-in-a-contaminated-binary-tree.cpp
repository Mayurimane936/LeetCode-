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
class FindElements {
    void formAtree(TreeNode* root, vector<int>&ans){
        if(!root)   return;
        if(root->left!=nullptr){
            root->left->val = 2 * root->val + 1;
            ans.push_back(root->left->val);
            formAtree(root->left, ans);
        }
        if(root->right!=nullptr){
            root->right->val = 2 * root->val + 2;
            ans.push_back(root->right->val);
            formAtree(root->right, ans);
        }
    }
public:
    int cnt = 0;
    vector<int>ans;
    FindElements(TreeNode* root) {
        if(!root){
            return;
        }
        root->val = cnt;
        ans.push_back(root->val);
        formAtree(root, ans);
    }
    
    bool find(int target) {
        for(int i=0; i<ans.size(); i++) {
            if(target==ans[i]){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */