class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit= 0;
        int minn = INT_MAX;
        

        for(int i=0; i<prices.size(); i++){
        //   if(prices[i] < min){
        //     min = prices[i];
        //      }
            minn = min(minn , prices[i]);

             int profit = prices[i] - minn;

             maxProfit =max(maxProfit, profit);
        }
      
         return maxProfit;
    }
};