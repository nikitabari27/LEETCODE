class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> pq;

        // for k elemnts
        for(int i=0; i<k; i++){
            pq.push(nums[i]);
        }

        // n-k elements
        for(int i=k; i<nums.size(); i++){
            int newElement = nums[i];

            if(newElement > pq.top()){
                pq.pop();
                pq.push(newElement);
                
            }
        }
        return pq.top();

        
    }
};