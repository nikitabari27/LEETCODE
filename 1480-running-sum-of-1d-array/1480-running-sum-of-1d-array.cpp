class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>ans(nums.size());

        int prevSum =nums[0];
        ans[0] = prevSum;

        for(int i=1; i<nums.size(); i++){
            prevSum+=nums[i];
            ans[i] = prevSum;
        }
        return ans;
    }
};