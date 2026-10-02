class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;

        for(int i=0; i<stones.size(); i++){

            pq.push(stones[i]);
        }
      
     while(pq.size() > 1){
        int w1= pq.top();
        pq.pop();

        int w2= pq.top();
        pq.pop();

        if(w1 !=w2){
            pq.push(w1-w2);
        }
        
      }
      if(pq.empty())return 0;
      else{
         return pq.top();
      } 
      
    }
};