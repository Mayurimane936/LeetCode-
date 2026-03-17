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
    ListNode* mergeNodes(ListNode* head) {
        if(!head) {
            return NULL;
        }
        ListNode* ptr = new ListNode(0);
        ListNode *ptr2 = ptr;
        ListNode* temp = head->next;
        int sum = 0;
        while(temp!=NULL) {
            if(temp->val == 0 && sum!=0){
                ptr->next = new ListNode(sum);
                ptr = ptr->next;
                sum = 0;
            }else{
                sum = sum+temp->val;
            }
            temp = temp->next;
        }
        return ptr2->next;
    } 
};