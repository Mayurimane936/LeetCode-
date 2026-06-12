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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode* >q;
        if(!root){
            return ans;
        }
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            int maxVal = INT_MIN;
            for(int i=0; i<n; i++){
                TreeNode* rootVal = q.front();
                q.pop();
                cout<<"root0val "<<rootVal->val<<endl;
                maxVal = max(maxVal, rootVal->val);
                if(rootVal->left){
                    q.push(rootVal->left);
                }
                if(rootVal->right){
                    q.push(rootVal->right);
                }
            }
            ans.push_back(maxVal);
        }
        return ans;
    }
};