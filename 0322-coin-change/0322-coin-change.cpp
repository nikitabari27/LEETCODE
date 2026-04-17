class Solution {
public:

int solve(vector<int>& coins, int amount){

// create dp
        vector<int> dp(amount+1 , INT_MAX);
    //observe base case
    dp[0] =0;

    // iterate from 0 to target amount
    for(int target =1; target<=amount; target++){
        // 1 se isliye start kyu ki 0 base case m already aa chuka h

            
            int mini = INT_MAX;

        for(int i=0; i<coins.size(); i++){
            
            
            if(target-coins[i] >= 0){
            int ans = dp[target - coins[i]];

            if(ans != INT_MAX){
                mini = min(mini, ans+1);
            }
         }
         
      
        }
         dp[target] = mini;
    }
     return dp[amount]; 
}
    int coinChange(vector<int>& coins, int amount) {
        
    

        int ans= solve(coins, amount);

        if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};