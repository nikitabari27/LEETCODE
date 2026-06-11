class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];

            //opening brackets push in stack
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                //closing bracket

                // check if stack is empty or not becouse if it is already empty return false
                if(!st.empty()){

                    char topCh = st.top();

                    if(ch==')' && topCh=='('){
                        //Matching brackets
                        st.pop();
                    }
                    else if(ch=='}' && topCh=='{'){
                        //Matching brackets
                        st.pop();
                    }
                    else if(ch==']' && topCh=='['){
                        //Matching brackets
                        st.pop();
                    }
                    else{
                    // Brackets are not matching
                    return false;
                   }
                }
             else{
                //stack is empty
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