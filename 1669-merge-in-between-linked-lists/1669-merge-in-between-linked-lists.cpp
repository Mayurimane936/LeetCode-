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
    void getLinkedListLength(ListNode* list, int &length){
        while(list->next!=NULL){
            list = list->next;
            length++;
        }
    }
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * temp1 = list1;
        ListNode *dummy = list1;
        ListNode * temp2 = list2;
        int start = 1;
        int end = 1;
        int length = 1;
      
        ListNode *endd;
        while(dummy!=NULL){
            if(b==end){
                if(dummy->next!=NULL){
                    endd = dummy->next;
                }
            }
            end++;
            dummy=dummy->next;
        }

       
        while(temp1->next!=NULL) {
            if(start == a){
                temp1->next = temp2;
            }
            cout<<"temp1->val"<<temp1->val<<endl;
            start++;
            end++;
            temp1= temp1->next;
        }
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }   
        temp2->next = endd->next;

        return list1;
    }
};