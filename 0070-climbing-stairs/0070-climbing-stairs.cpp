class Solution {
public:

int topDown(vector<int> &dp , int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }
    // step 3-> check if ans already exist
    if(dp[n] != -1){
        return dp[n];
    }

    // step2-> store & return ans in dp

    dp[n] = topDown(dp ,n-1) + topDown(dp, n-2);
    return dp[n];
}
    int climbStairs(int n) {
        // Dp top down

        //step 1 -> create dp

        vector<int > dp(n+1, -1);

        return topDown(dp ,n);
    }
};