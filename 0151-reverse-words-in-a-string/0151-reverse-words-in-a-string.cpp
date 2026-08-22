class Solution {
public:
    string reverseWords(string s) {
        

        string ans ="";
        string temp ="";

        for(int i=s.size()-1; i>=0; i--){

            if(s[i]==' '){
              
             if (!temp.empty()){
              reverse(temp.begin(), temp.end());
              ans = ans+temp;
              ans.push_back(' ');
              temp="";
              } 
            }
            else{
                temp.push_back(s[i]);
            }   
        }
        //For last char kyuki last char ke liye space aayega hi nhi
          if(!temp.empty()){
             reverse(temp.begin(), temp.end());
              ans= ans+ temp;
          }
                 // Remove extra space at the end
        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();


         return ans;
    }
};