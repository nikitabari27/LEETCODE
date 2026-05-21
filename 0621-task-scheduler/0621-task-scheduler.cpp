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
        for(int i=0; i<26; i++){
            maxFreq = max(maxFreq , count[i]);
        }

        // max count
        int maxCount =0;
        for(int i=0; i<26; i++){
             if(maxFreq==count[i]){
                maxCount++;
            }
        }
        // formula
        int ans = (maxFreq - 1) * (n+1) + maxCount;
       
        int m= tasks.size();
        
        int output= max(m , ans);
        return output;
    }
};