class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<int> st;

        for(int i=0; i<s.size(); i++){

            char ch = s[i];

            if(st.empty() || st.top() != ch){
                st.push(ch);
            }
            else{
                st.pop();
            }
        }

        string ans ="";

        while(!st.empty()){
          
          ans.push_back(st.top());
          st.pop();

        }

        reverse(ans.begin(), ans.end());
        return ans;


    }
};