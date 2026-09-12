class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int l=0;
        int r=0;

        int maxLen=0;

        unordered_map<int , int> mp;

        while(r < fruits.size()){

            mp[fruits[r]]++;

            if(mp.size() >2){

                while(mp.size() >2){
                 // isse map m frquency - ho rhi h
                    mp[fruits[l]]--;

                    if(mp[fruits[l]]==0){
                        mp.erase(fruits[l]);
                    }

                    l++;
                }
            }

            if(mp.size() <=2){

                int len= r-l+1;
                maxLen = max(maxLen, len);
            }
            r++;
        }
        return maxLen;
    }
};