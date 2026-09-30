class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int> st;

        for(int i=sandwiches.size()-1; i>=0; i--){
           st.push(sandwiches[i]);
        }

        queue<int> q;

        for(int i=0; i<students.size(); i++){
            q.push(students[i]);
        }

        int rotation =0;
    
     while(!q.empty() && rotation < q.size()){
        if(q.front() == st.top()){
           q.pop();
           st.pop();
           rotation =0;
        }
        else{
            int a  = q.front();
            q.pop();
            q.push(a);
            
            rotation++;
        }
     }
     
     return q.size();
    }
};