class Solution {
public:
    bool isValid(string s) {

       stack<char> st;

       for(int i=0; i<s.size(); i++){
         char ch= s[i];

         // opening bracket
          if(ch=='(' || ch=='[' || ch=='{'){
             st.push(ch);
          }

          // closing bracket
          else{

             if(!st.empty()){

                char top= st.top();
                 
                if(top=='('  && ch==')'){// brackets are mateching
                    st.pop();
                }
                 else if(top=='['  && ch==']'){
                    st.pop();
                }
                 else if(top=='{'  && ch=='}'){
                    st.pop();
                }
               // Brackets are not matching
                else{
                  return false;
               }
             }

             // if stack is empty
             else{
                return false;
             }
          }  
       }
        if(st.empty()){
            return true;
          } 
          else{
            return false;
          }
    }
};