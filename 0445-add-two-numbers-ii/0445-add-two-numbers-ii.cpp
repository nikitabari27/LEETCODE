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

ListNode* reverse(ListNode* head){

    ListNode* prev = NULL;
    ListNode* curr= head;

    while(curr != NULL){
       ListNode* forward =curr->next;
        curr->next = prev;

        prev =curr;
        curr= forward;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         // Reverse the linked list
          l1= reverse(l1);
          l2= reverse(l2);

          //ADD

          ListNode* ansHead =NULL;
          ListNode* ansTail =NULL;
          int carry=0;
        
        //case 1
        while(l1 != NULL && l2 != NULL ){
            
          int sum= carry + l1->val +l2->val;

          int digit = sum % 10;
           carry = sum / 10;

          // create a newNode for digit
          ListNode* newNode =new ListNode(digit);

         // insert newNode
          if(ansTail == NULL){
               ansTail = newNode;
               ansHead = newNode;
          }
          else{
            // Mtlb node present h
              ansTail ->next = newNode;
             // update tail
              ansTail = newNode;
          }
          l1 = l1->next;
          l2 = l2->next;
        }

        //case 2
        while(l1 != NULL){

         int sum= carry + l1->val ;

          int digit = sum % 10;
           carry = sum / 10;

          // create a newNode for digit
          ListNode* newNode =new ListNode(digit);

             // insert newNode
          if(ansTail == NULL){
               ansTail = newNode;
               ansHead = newNode;
          }
          else{
            // Mtlb node present h
              ansTail ->next = newNode;
             // update tail
              ansTail = newNode;
          }
     

              l1 =l1->next;
        }

        //case 3
        while(l2 != NULL){

         int sum= carry + l2->val ;

          int digit = sum % 10;
           carry = sum / 10;

          // create a newNode for digit
          ListNode* newNode =new ListNode(digit);

             // insert newNode
          if(ansTail == NULL){
               ansTail = newNode;
               ansHead = newNode;
          }
          else{
            // Mtlb node present h
              ansTail ->next = newNode;
             // update tail
              ansTail = newNode;
          }
              l2 =l2->next;
         }

         // case 4
         while(carry != 0){
 
          int sum= carry;

          int digit = sum % 10;
           carry = sum / 10;

          // create a newNode for digit
          ListNode* newNode =new ListNode(digit);

             // insert newNode
          if(ansTail == NULL){
               ansTail = newNode;
               ansHead = newNode;
          }
          else{
            // Mtlb node present h
              ansTail ->next = newNode;
             // update tail
              ansTail = newNode;
          }
         }

         // reverse final ans
         
         return reverse(ansHead);
         
    }
};