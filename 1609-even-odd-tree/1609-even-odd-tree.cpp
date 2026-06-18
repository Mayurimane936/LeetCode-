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
    void checkIfEvenIndexed(vector<int>&temp, vector<int> &nodes, bool &ans){
        int n = nodes.size();
        for(int i=0; i<n; i++){
            if(nodes[i]%2==0){
                ans = false;
                return;
            }
        }
        for (int i = 1; i < n; i++) {
            if (nodes[i] <= nodes[i - 1]) {
                ans = false;
                return;
            }
        }
        ans = (temp == nodes);
    }
    void checkIfOddIndexed(vector<int>&temp, vector<int> &nodes, bool& ans){
        int n = nodes.size();
        for(int i=0; i<n; i++){
            if(nodes[i]%2==1){
                ans = false;
                return;
            }
        }
        for (int i = 1; i < n; i++) {
            if (nodes[i] >= nodes[i - 1]) {
                ans = false;
                return;
            }
        }

        ans = (temp == nodes);
    }
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root){
            return false;
        }
        int level = 0;
        bool ans = false;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>nodes;
            vector<int>temp;
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                nodes.push_back(node->val);
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
            temp = nodes;
            if(level%2==0){
                sort(temp.begin(), temp.end());
                checkIfEvenIndexed(temp, nodes, ans);
            }else{
                sort(temp.begin(), temp.end(), greater<int>());
                checkIfOddIndexed(temp, nodes, ans);
            }
            if (!ans) return false;
            level++;
        }
        return true;
    }
};