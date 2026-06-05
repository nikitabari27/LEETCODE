class Solution {
public:

  static bool cmp(pair<int,int> a , pair<int,int> b){
    return a.first < b.first;
  }
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // For storing indexes
        vector<pair<int,int>> data;

         for(int i=0; i<nums.size(); i++){
            int val= nums[i];
            int index= i;

            data.push_back({val, index});
         }

         vector<int>ans;

         //sort
         sort(data.begin(), data.end(), cmp);

        int s=0;
        int e = data.size()-1;

         while(s < e){
            
            if(data[s].first + data[e].first==target){
                ans.push_back(data[s].second);
                ans.push_back(data[e].second);
                break;
            }

            else if(data[s].first + data[e].first > target){
                e--;
            }
            else{
                s++;
            }
         }
         return ans;
    }
};