class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    
    int ans=0;
    
      for(int i=0; i<nums.size()-1; i++){
        for(int j=i+1; j<nums.size(); j++){

            if(nums[i]==nums[j]){
                ans ^= nums[i];
            }
        }
      }
      return ans;
    }
};