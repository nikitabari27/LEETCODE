class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;

        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }

         unordered_map<int, int> mp1;

        for(int i=0; i<nums2.size(); i++){
            mp1[nums2[i]]++;
        }
        
        vector<int> v1, v2;
        for(auto i: mp){

            if(mp1.find(i.first)== mp1.end()){
                v1.push_back(i.first);
            }
        }
        for(auto i: mp1){

            if(mp.find(i.first)== mp.end()){
                v2.push_back(i.first);
            }
        }
        return {v1, v2};
    }
};