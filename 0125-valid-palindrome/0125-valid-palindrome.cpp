class Solution {
public:
    bool isPalindrome(string s) {
        
        // int i=0;
        // int j=s.size();

        string alpha;

       for(int i=0; i<s.size(); i++){
          if(isalnum(s[i])){
             alpha.push_back(s[i]);
          }
       
    }
    transform(alpha.begin(), alpha.end(), alpha.begin(), ::tolower);

    int i=0;
    int j =alpha.size()-1;

    while(i<j){
         if(alpha[i] != alpha[j]){
            return false;
           }
           i++;
           j--;
         }
        return true;
    }
};