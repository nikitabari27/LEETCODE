class Solution {
public:
    int characterReplacement(string s, int k) {
        
      int l=0;
      int r=0;

      int maxF= 0;
      int maxLen= 0;

      unordered_map<char, int> mp;

      while(r< s.size()){

        // update freq
        mp[s[r]]++;

        // find maxF
        maxF= max(maxF, mp[s[r]]);

        // check condn


        

            while((r-l+1)- maxF > k){

                mp[s[l]]--;
                l++;
            }
      

            maxLen= max(maxLen, r-l+1);
       
        r++;
      }
       return maxLen;
    }
};