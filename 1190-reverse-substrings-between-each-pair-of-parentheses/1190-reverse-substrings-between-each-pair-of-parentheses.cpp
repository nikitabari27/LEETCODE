class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char>st;

        string ans ="";

        for(int i=0; i<s.size(); i++){
           
           char ch = s[i];
// Jb tk closing bracket na aa jaye stack m push krte raho

            if(ch != ')'){
                st.push(ch);

            }
            // Aur jb closing bracket aa jaye to string m push kro stack ke  char jb tk opening bracket na aa jaye
            else{
            
           while(st.top() != '('){

                ans.push_back(st.top());
                st.pop();
               
            }
             st.pop();
          

          // Ab string ko wapas push kro stack m jb tk string khali na ho j

            for(int i=0 ; i<ans.size() ; i++){
                st.push(ans[i]);
            }
             ans = "";

            }
        }
        string temp="";

       while(!st.empty()){
         
         temp.push_back(st.top());
         st.pop();
       }

       reverse(temp.begin(), temp.end());

       return temp;
    }
};