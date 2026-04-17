class Solution {
public:

int bottomUp(int n){
   //step1 -> create dp
   vector<int>dp(n+1, -1);

    //step2-< observe base case
    dp[0] =0;

    if(n==0){
        return dp[0];
    }
    dp[1] =1;

    //step3
    for(int i=2; i<=n; i++){
        // top doen m apan dekha ki n se 2 tk apan ko solve krna pda
        // kyuki yeh bottom up h isliye 2 se n kiya
        dp[i] =dp[i-1] +dp[i-2];
    }
    return dp[n];
}
    int fib(int n) {


         return bottomUp(n);
    }
};