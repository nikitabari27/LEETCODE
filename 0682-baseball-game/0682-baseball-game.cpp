class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;

        for(int i=0; i<operations.size(); i++){

            if(operations[i]=="C"){
                st.pop();
            }
           else if(operations[i]=="D"){

                int record= st.top();

                st.push(record*2);
            }
            else if(operations[i]=="+"){

                    int first= st.top();
                     st.pop();

                     int second = st.top();
                     st.pop();

                    st.push(second);
                    st.push(first);
                     st.push(first+second);
                     
                     
            }
            else{
                st.push(stoi(operations[i]));
            }

        }

        int total=0;

        while(!st.empty()){

            total += st.top();
            st.pop();
        }
        return total;
    }
};