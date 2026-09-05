class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
       int n= nums.size();

        int maxi =INT_MIN;
        int mini= INT_MAX;

        vector<int>maxm(n);
         vector<int>minm(n);

        for(int i=0; i<n; i++){
            maxi= max(maxi, nums[i]);
            maxm[i]= maxi;
         }  
          for(int i=n-1; i>=0; i--){
            mini= min(mini, nums[i]);
            minm[i]= mini;
     }

         for(int i=0; i<n; i++){
            int score= maxm[i]- minm[i];

               if(score <= k){
              return i;
            }
         }
         

        
        
        return -1;
    }
};