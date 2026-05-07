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
    ListNode* middleNode(ListNode* head) {
        
        // LL is empty
        // if(head==NULL){
        //     return head;
        // }

        // // LL has 1 node
        // if(head->next =NULL){
        //     return head;
        // }

       ListNode* slow = head;
       ListNode* fast = head;

       while(slow!=NULL && fast!=NULL){

         fast = fast->next;
         // agr fast NULL nhi hua h to ek step aurr agage badao
         // aur fir apan slow ko bhi aage bda skte h

         if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
            
         }
       }
       return slow;
    }
};