class Solution {
public:

void solve(int index , vector<int>& nums,  vector<int> &temp,  vector<vector<int>> &ans){

    ans.push_back(temp);

    //iterate
    for(int i=index; i<nums.size(); i++){

        temp.push_back(nums[i]);
    
    //Recursion
    solve(i+1 , nums, temp , ans);
    }
    //Backtracking
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;

        vector<int> temp;

        solve(0, nums, temp ,ans);

        return ans;
    }
};