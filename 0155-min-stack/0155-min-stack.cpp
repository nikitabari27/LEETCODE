class MinStack {
public:

    vector<pair<int,int>> v;

    // first int value show kr tha h
    // second int min val show kr tha h
    MinStack() {
        
    }
    
    void push(int value) {
 
  // Mtlb jb apna vector already empty h tb first aur second dono hi place pr val dalege
        if(v.empty()){
            pair<int, int>p;
            p.first =value;
            p.second =value;

            v.push_back(p);
        }

        //jb vector empty na ho tb
        else{
            pair<int, int>p;
             p.first= value;
              // yha to cuurent val min hogi yha to vector m insert last value of second int
             p.second= min(value, v.back().second);

             v.push_back(p);
        }
        
    }
    
    void pop() {
        v.pop_back();
        
    }
    
    int top() {
        // vector m insert last value
       return v.back().first;
    }
    
    int getMin() {
        
        // min value
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */