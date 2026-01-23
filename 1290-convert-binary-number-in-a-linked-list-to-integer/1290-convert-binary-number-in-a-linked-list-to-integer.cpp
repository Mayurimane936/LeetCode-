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
    int getDecimalValue(ListNode* head) {
        string temp= "";
        while(head){
            if(head->val==1){
                temp.push_back('1'); 
            }else{
                temp.push_back('0'); 
            }
            head = head->next;
        }
        int ans = 0;
        int start = 1;
        int n = temp.length()-1;
        while(n>=0){
            if(temp[n]=='1'){
                ans+=start;
            }
            start = start*2;
            n--;
        }
        cout<<temp<<endl;
        return ans;

    }
};