class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        
        if(nums.size()==1)return nums[0];
       
       int sume =0;
       int sumo = 0;

        for(int i=0; i<nums.size(); i++){

            if(i % 2 ==0){
                sume += nums[i];
            }
            else{
                sumo += nums[i];
            }
        }
        return sume - sumo;
    }
};