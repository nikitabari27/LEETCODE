class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       int zeros =0;
        int ones=0;
        int twos=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zeros++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        }
        int idx=0;

        while(zeros--){
            nums[idx]=0;
            idx++;
        }
        while(ones--){
            nums[idx]=1;
            idx++;
        }
        while(twos--){
            nums[idx]=2;
            idx++;
        }
        
    }
};