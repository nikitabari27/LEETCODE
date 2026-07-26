class Solution {
public:

class node{
    public:
     int data;
     int row;
     int col;

     node(int d, int r, int c){
        data =d;
        row= r; 
        col= c;
     }
};

class compare{
    public:
       bool operator()(node*a, node* b){
          return a->data > b->data;
    }
};
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;

        //minheap
        priority_queue<node* , vector<node*>, compare> minHeap;

        // First k elemnts of each list

        int k= nums.size();

        for(int i=0; i<k; i++){
            int element= nums[i][0];

            maxi= max(maxi, element);
            mini= min(mini, element);

            // new Node
            node* temp = new node(element, i, 0);

            minHeap.push(temp);
        }

        // ans
       int ansStart= mini;
       int  ansEnd= maxi;

        while(!minHeap.empty()){

            // Access top Element
            node* top= minHeap.top();
        // minHeap ki top pr smallest element ho ga uski value , row ,col sb access kr li
            int topElement= top->data;
            int topRow= top->row;
            int topCol= top->col;
        // fir usse pop  kr diya
            minHeap.pop(); 
        // pr kyuki apan ne uski value store kr rkhi h

        //to usse mini me dal dege 
         mini =topElement;

         // smallest range check krege
         int currRange = maxi- mini;
         int ansRange = ansEnd- ansStart;

         if(currRange < ansRange ){
            ansStart= mini;
            ansEnd= maxi;
         }
        // Ab check krege ki jis row m mini tha uske aage eleemnt h yha nhi
         if(topCol + 1 < nums[topRow].size()){
        
        // update maxi
        maxi= max(maxi, nums[topRow][topCol+1]);

        //newNode for maintaining k size
        node* newNode= new node(nums[topRow][topCol +1], topRow, topCol+1);

        minHeap.push(newNode);
        
         }
         else{
            break;
         }
        }

        vector<int>ans;

        ans.push_back(ansStart);
        ans.push_back(ansEnd);

        return ans;
    }
};