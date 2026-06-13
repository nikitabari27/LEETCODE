class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st;

        st.push(-1);

        int maxLen=0;

        for(int i=0; i<s.size(); i++){
            char ch= s[i];

            if(ch=='('){
                //push index
                st.push(i);
            }

            else{
                //closing so pop
                st.pop();

                if(st.empty()){
                    //push curr index
                    st.push(i);
                }
                else{
                    int len= i- st.top();

                    maxLen= max(len, maxLen);
                }
            }
        }
         return maxLen;
    }
};