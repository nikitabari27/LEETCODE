class Solution {
public:

int topDownApproach(vector<int> &dp , int n){
    //Base case
    if(n==1 ||n==0){
        return n;
    }

   // step3 -> check if ans already exist
     if(dp[n] != -1){
        return dp[n];
     }

    // step2-> store ans in dp
     dp[n]= topDownApproach(dp ,n-1) + topDownApproach(dp ,n-2);
    return dp[n];
}
    int fib(int n) {
        
        //step1->Create dp
        vector<int>dp(n+1 ,-1);

        int ans = topDownApproach (dp ,n);
        return ans;
    }
};