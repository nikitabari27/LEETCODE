class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        int count[26];

//  isse sare label ka count nikal gya
        for(int i=0; i<tasks.size(); i++){
            count[tasks[i] - 'A']++;
        }
        
        // max freq
        int maxFreq =0;
        for(int f : count){
            maxFreq = max(maxFreq , f);
        }

        // max count
        int maxCount =0;
        for(int f : count){
             if(maxFreq==f){
                maxCount++;
            }
        }
        // formula
         int m = tasks.size();
        int ans = (maxFreq - 1) * (n+1) + maxCount;
       

        int output= max(m , ans);
        return output;
    }
};