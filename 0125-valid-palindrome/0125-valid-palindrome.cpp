class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans="";
        for(int i=0; i<s.size(); i++){

            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
         

        int i=0; 
        int j= ans.size()-1;

        while(i<=j){

            if(ans[i]==ans[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};