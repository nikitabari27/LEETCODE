class Solution {
public:
    bool isValid(string s) {
        
        stack<int> st;

        for(int i=0; i<s.size(); i++){

            char ch= s[i];

            if(ch =='(' || ch=='['|| ch=='{'){
                st.push(ch);
            }

            else{

                if(st.empty())return false;

                else{

                    char newch = s[i];

                    if(st.top() =='(' && newch==')'){
                        st.pop();
                    }
                   else if(st.top() =='[' && newch==']'){
                        st.pop();
                    }
                    else if(st.top() =='{' && newch=='}'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        if(!st.empty())return false;

        else{
            return true;
        }
    }
};