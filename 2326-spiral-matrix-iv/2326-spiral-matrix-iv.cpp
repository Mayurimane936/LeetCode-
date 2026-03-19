/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
      vector<vector<int>> matrix(m, vector<int>(n, -1));
      int topRow = 0, bottomRow = m-1, leftCol = 0, rightCol = n-1;
      while(head){
        for(int col=leftCol; col<=rightCol && head; col++){
            matrix[topRow][col] = head->val;
            head = head->next;
        }
        topRow++;
        for(int row=topRow; row<=bottomRow && head; row++) {
            matrix[row][rightCol] = head->val;
            head= head->next;
        }
        rightCol--;
        for(int col=rightCol; col>=leftCol && head; col--){
            matrix[bottomRow][col] = head->val;
            head=head->next;
        }
        bottomRow--;

        for(int row=bottomRow; row>=topRow && head; row--){
            matrix[row][leftCol] = head->val;
            head=head->next;
        }
        leftCol++;
      }
      return matrix;
    }
};