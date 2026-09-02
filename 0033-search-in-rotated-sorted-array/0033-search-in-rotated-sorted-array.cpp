class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s=0;
        int e= nums.size()-1;

        int mid= s+(e-s)/2;

        while(s <= e){
           mid= s+(e-s)/2;

           if(nums[mid]==target){
            return mid;
           }
           // left half

           if(nums[s] <= nums[mid]){
             
             if(nums[s] <= target && target <= nums[mid] ){
                e=mid-1;
             }
             else{
                s=mid+1;
             }
           }
         // right half
           else{

            if(nums[mid] <= target && nums[e] >= target){
                s= mid+1;
            }
            else{
                e=mid-1;
            }
           }



        }
        return -1;
    }
};