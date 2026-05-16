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

  int getLength(ListNode* &head){
     
     int len =0;
     ListNode* temp =head;

     while(temp != NULL){
        len++;
        temp = temp->next;
     }
     return len;
  }
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        
        // Find len
        int len = getLength(head);

        // Find tail
        ListNode* tail = head;
        while(tail ->next != NULL){
            tail= tail->next;
        }

        // k
        k = k% len;

        // Mtlb jb len aur k  kivalue same ho
        if(k==0){
            return head;
        }
        // Make circular LL
        tail ->next = head;

        //Now find last node of new LL
        int lastNode = len -k;

        ListNode* newTail = head;

        for(int i=1; i<lastNode; i++){
            newTail = newTail ->next;
        }
        ListNode* newHead = newTail->next;

        newTail->next =NULL;

        return newHead;
    }
};