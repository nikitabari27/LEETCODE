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

 class compare {
       public:
        bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
   
        // create minHeap
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        int k= lists.size();

        if(k==0)return NULL;

        //Insert every first elemnt of each LL in minHeap
        for(int i=0; i<k; i++){
            if(lists[i] != NULL){
               minHeap.push(lists[i]);
            }
        }

        ListNode* head= NULL;
        ListNode* tail= NULL;

        while(!minHeap.empty()){
            // 3 step process

            ListNode* temp= minHeap.top();

            //pop
            minHeap.pop();

            //insert
             
             if(head==NULL){
                // mtlb LL is empty
                head= temp;
                tail= temp;

                // check in samee LL aage element hai yha nhi
                if(tail->next != NULL){
                    // Agr aage h then push in minHeap to maintain k size
                    minHeap.push(tail->next);
                }
             }

             else{
                // LL is not empty
                tail->next = temp; // tail ke aage node m temp dala
                tail= temp;

                 // check in samee LL aage element hai yha nhi
                if(tail->next != NULL){
                    // Agr aage h then push in minHeap to maintain k size
                    minHeap.push(tail->next);
                }
             }
        }
       return head; 
    }
};