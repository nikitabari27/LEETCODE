class Solution {
public:


    vector<string> findRelativeRanks(vector<int>& score) {
         
        vector<int> idx(score.size());
        vector<string> ans(score.size());

        for(int i=0; i<score.size(); i++){
            idx[i] =i; // indexes store ho gye
        }
      // ab index ko sort kre ge on the basis of score
        sort(idx.begin(), idx.end(),[&](int a, int b){
           return score[a] > score[b];
        });

      for(int i=0; i<idx.size(); i++){

        if(i==0){
            ans[idx[i]]="Gold Medal";
        }
        else if(i==1){
            ans[idx[i]]="Silver Medal";
        }
        else if(i==2){
            ans[idx[i]]="Bronze Medal";
        }
        else{
            ans[idx[i]]=to_string(i+1);
        }
      }
      return ans;
    }
};