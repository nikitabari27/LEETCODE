class Solution {
public:

int solve(int amount,vector<int> &coins, vector<int> &dp){

    //Base case
    if(amount ==0){
        return 0;
    }
    if(amount < 0){
        return INT_MAX;
    }

    // check
    if(dp[amount] != -1){
        return dp[amount];
    }

    //
    int mini =INT_MAX;
    for(int i=0; i<coins.size(); i++){
        int ans = solve(amount- coins[i], coins ,dp);

        if(ans != INT_MAX){
            mini = min( mini, 1+ans);
        }
        //store
        dp[amount] = mini;
        //return 
        

    }
     return dp[amount];
}
    int coinChange(vector<int>& coins, int amount) {
        

        vector<int> dp(amount+1, -1);

        int ans= solve(amount , coins, dp);

         if(ans == INT_MAX){
            return -1;
         }
         else{
            return ans;
         }
    }
};