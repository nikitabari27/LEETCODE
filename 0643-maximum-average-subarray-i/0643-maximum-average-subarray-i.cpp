class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int l=0;
        int r=0;

        int sum=0;
        int maxSum= INT_MIN;

        while(r< nums.size()){
             
             if(k < 0)return 0;

              sum += nums[r];

              if(r-l+1 == k){

                // k size reach ho gyi then calculate maxsum
                maxSum= max(maxSum, sum);
 
                sum -= nums[l];
                l++;
              }
            r++;
        }
        return (double)maxSum/k;
    }
};