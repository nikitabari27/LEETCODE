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
    int getLength(ListNode*head){
        int len =1;
        ListNode *temp= head;
        while(temp->next != NULL){
            temp = temp->next;
            len++; 
               
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        //base
         if(k==0 || head==NULL || head->next == NULL)return head;
 
  // Find len;
       int len= getLength(head);

        k= k%len;
         if(k==0) return head;

       //Find lastNode or old tail
       ListNode* tail=head;
       while(tail->next != NULL){
        tail= tail->next;
       }

       // Ab  pehle last next ko head se connect kr dege
        tail->next= head;

        // Remaing nodes
        
        int remainNodes= len-k;

       //Fir ek new pointer bnaya newTail jisse head pe point liya
       ListNode* newTail = head;

       //Ab isse aage badayge  
       for(int i=1; i<remainNodes; i++){
        newTail= newTail->next;
       }
       // loop fail hone ke baad jo newTail ka next vale node h uspe ek naya pointer lgayege
       ListNode* newHead = newTail->next;

       //  Ab linkin tod dege 
       newTail->next= NULL;

     return newHead;   
    }
};