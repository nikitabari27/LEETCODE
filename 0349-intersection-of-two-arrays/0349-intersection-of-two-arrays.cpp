class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> st;

        for(int i=0; i< nums1.size(); i++){
              st.insert(nums1[i]);
        }
        set<int> st1;

        for(int i=0; i< nums2.size(); i++){
              st1.insert(nums2[i]);
        }

      set<int> final;

        for(int i=0; i< nums1.size(); i++){

            if(st1.contains(nums1[i])){
                final.insert(nums1[i]);
            }
        }

          vector<int>ans;

          for(int it:final){
            ans.push_back(it);
          }
        return ans;
    }
};