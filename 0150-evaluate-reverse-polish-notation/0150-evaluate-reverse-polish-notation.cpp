class Solution {
public:

int operate(int a, int b, string op ){

    if(op =="+")return a+b;
    if(op =="-")return a-b;
    if(op =="*")return a*b;
     if(op =="/")return a/b;

     return 0;

}
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;

        for(int i=0; i<tokens.size(); i++){

            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){

                int b= st.top();
                st.pop();

                int a= st.top();
                st.pop();

                int result = operate(a, b, tokens[i]);

                st.push(result);

            }
            else{
                // jb operand ho
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};