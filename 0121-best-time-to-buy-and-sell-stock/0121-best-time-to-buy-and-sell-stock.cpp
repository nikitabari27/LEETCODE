class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit= 0;
        int min = INT_MAX;
        

        for(int i=0; i<prices.size(); i++){
          if(prices[i] < min){
            min = prices[i];
             }
             int profit = prices[i] - min;

             maxProfit =max(maxProfit, profit);
        }
      
         return maxProfit;
    }
};