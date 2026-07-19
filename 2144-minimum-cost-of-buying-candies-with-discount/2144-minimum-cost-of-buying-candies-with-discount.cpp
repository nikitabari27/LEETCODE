class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
       
         sort(cost.begin(), cost.end(), greater<int>());

         int ans=0;
       
         for(int i=0; i<cost.size(); ){

              int count=0;

            while(count<2 && i<cost.size()){
               ans += cost[i];
               i++;
               count++;
         }
         // skip third candy
         i++;
           
      }
      return ans;
   }
};