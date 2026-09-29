class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini= INT_MAX;
        int maxProfit = 0;
        
        for(int i=0; i<prices.size(); i++){

            mini = min(prices[i], mini);

            maxProfit =max(prices[i] -mini, maxProfit);
             
           // maxProfit = max(maxProfit, prices[i]);
        }
        return maxProfit;
    }
};