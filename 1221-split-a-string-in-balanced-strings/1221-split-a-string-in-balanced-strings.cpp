class Solution {
public:
    int balancedStringSplit(string s) {
        
        int j=0;
        int count=0;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='R')j++;

            else{
                j--;
            }

             if(j==0){
            count++;
          }
          
        }
        return count;
    }

};