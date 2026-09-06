class Solution {
public:
 
static bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<pair<int, int>> v;

        for(auto it : mp){

            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};