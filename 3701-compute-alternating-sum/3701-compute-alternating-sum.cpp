class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        
        if(nums.size()==1)return nums[0];
       
       int sum =0;
       
        for(int i=0; i<nums.size(); i++){

            if(i % 2 ==0){
                sum += nums[i];
            }
            else{
                sum -= nums[i];
            }
        }
        return sum;
    }
};