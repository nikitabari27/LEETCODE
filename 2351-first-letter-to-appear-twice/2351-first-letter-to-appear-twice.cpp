class Solution {
public:
    char repeatedCharacter(string s) {
        
        bool flag[26];

        for(int i=0; i<s.size(); i++){

            char ch= s[i];

            if(flag[ch- 97]){
                return ch;
            }
            flag[ch-97]= true;
        }
        return ' ';

    }
};