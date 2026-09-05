class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        
        vector<int>ans;

        int carry= 0;

           for(int i=nums.size()-1; i>=0; i--){

            int sum= nums[i] + k%10 + carry;

            carry= sum /10;

            k= k/10;

            ans.push_back(sum %10);   
        }

        while(k  > 0 || carry >0){
             
             int sum = k%10 + carry;

             carry= sum/10;
             k= k/10;

             ans.push_back(sum%10);
        }
          reverse(ans.begin(), ans.end());

       return ans;
    }
};