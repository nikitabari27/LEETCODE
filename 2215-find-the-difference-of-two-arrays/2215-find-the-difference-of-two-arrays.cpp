class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>>ans;

        set<int> st;

        for(int i=0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }
         set<int> st1;

        for(int i=0; i<nums2.size(); i++){
            st1.insert(nums2[i]);
        }

        vector<int>v1;

        for(int it: st){

            if(!st1.contains(it)){
                v1.push_back(it);
            }
        }
       

        vector<int>v2;

        for(int it: st1){

            if(!st.contains(it)){
                v2.push_back(it);
            }
        }
       ans.push_back(v1);
       ans.push_back(v2);

       return ans;
    }
};