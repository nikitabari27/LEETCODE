class Solution {
public:
    bool isValid(string s) {
        // create stack

        stack<char> st;

        for(char c : s){
            // opening bracket -> push
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }

            else{
                // closing bracket aayege

                if(st.empty()){
                    return false;
                }

                char top= st.top();
                    st.pop();

                if(c==')' && top != '('  ||
                   c=='}' && top!= '{' ||
                   c==']' && top != '['){

                    return false;
                   }
            }
        }
        return st.empty();
    }
};