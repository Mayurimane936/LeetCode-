/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        ListNode* pudhcha = head;
        while(pudhcha!=NULL && pudhcha->next!=NULL) {
            pudhcha = pudhcha->next->next;
            curr = curr->next;

            if(curr == pudhcha) {
                return true;
            }
        }
        return false;

    }
};