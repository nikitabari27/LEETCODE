class Solution {
public:

int solve(vector<int> &dp, int n){

    //Base case
    if(n==0 || n==1){
        return 1;
    }
    //check 
    if(dp[n] != -1){
        return dp[n];
    }

     dp[n]= solve(dp, n-1) + solve(dp , n-2);
    return dp[n];
}
    int climbStairs(int n) {
        vector<int> dp(n+1 , -1);
          
        int ans= solve(dp , n);

        return ans;
    }
};