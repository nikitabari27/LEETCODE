class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    
    set<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    int i=0;

     while(i<nums.size()-2){
        int left= i+1;
        int right= nums.size()-1;

        while(left < right){

       int sum= nums[i] + nums[left] + nums[right];

        if(sum < 0){
            left++;
            
        }
       else if(sum > 0){
            right--;
            
        }

        else{
           ans.insert({nums[i], nums[left], nums[right]});
            left++;
            right--;
        }

        }
        i++;
     }
     vector<vector<int>> a;
     for(auto  x : ans){
        a.push_back(x);
     }
     return a;
    }
};