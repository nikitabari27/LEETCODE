class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int>dq;  // For storing indexes in dq

        vector<int>ans;

        //Process first k size window
        for(int i=0; i<k; i++){

            while(!dq.empty() && nums[dq.back()]< nums[i]){
                dq.pop_back();
            }
            // otherwise insert the element if while condn is not working
            dq.push_back(i);
        }
        // Store ans for first window
        ans.push_back(nums[dq.front()]);

        // Remaining windows
        for(int i=k; i<nums.size(); i++){

            // Remove purane element
            if(!dq.empty() && i-k >= dq.front()){
                dq.pop_front();
            }
            
            // Addition of new element
              while(!dq.empty() && nums[dq.back()]< nums[i]){
                dq.pop_back();
            }
            // otherwise insert the element if while condn is not working
            dq.push_back(i);

              // Store ans for first window
               ans.push_back(nums[dq.front()]);

        }
       

       return ans;
    }
};