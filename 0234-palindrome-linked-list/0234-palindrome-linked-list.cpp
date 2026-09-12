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

ListNode* reverseLL(ListNode* & head){

    ListNode* prev = NULL;
    ListNode* curr =head;

    while(curr!=NULL){

        ListNode* forward= curr->next;

        curr->next = prev;

        prev= curr;
        curr= forward;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        
// Find middle node
        ListNode* slow= head;
        ListNode* fast= head->next;

        while( fast != NULL && fast->next != NULL){

            slow= slow->next;
            fast= fast->next->next;
        }

        // middle node ke agge ki LL reverse kr lo

        ListNode* reverse = reverseLL(slow);

        // compare

        ListNode*temp1 =head;
        ListNode*temp2 =reverse;

        while(temp1 != NULL && temp2 != NULL){

            if(temp1->val != temp2->val){
                return false;
            }
            
                temp1= temp1->next;
                temp2= temp2->next;
        
        }
        return true;
    }
};