class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end(), greater<int>());
    
    int max= 0;
        for(int i=0; i<k; i++){
           max= nums[i];
        }
        return max;
    }
};