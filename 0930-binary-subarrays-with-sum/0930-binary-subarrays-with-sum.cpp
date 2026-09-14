class Solution {
public:

int atMost(vector<int>& nums, int goal){

     if(goal< 0)return 0;

       int l=0;
        int r=0;

        int sum =0;
        int count =0;

        int maxCount =0;

        while(r< nums.size()){

            sum += nums[r];
            
            while(sum > goal){

                sum -= nums[l];
                l++;
            }

            count = count + (r-l+1);

           // maxCount = max(count, maxCount);
            r++;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {

         return atMost(nums, goal) - atMost(nums, goal - 1);
    } 
};