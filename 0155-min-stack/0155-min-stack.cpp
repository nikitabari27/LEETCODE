class MinStack {
public:
  vector<pair<int, int>> v;
    MinStack() {
        
    }
    
    void push(int value) {
        
        if(v.empty()){

            pair<int, int> p;

            p.first= value;
            p.second= value;

            v.push_back(p);
        }
        else{
            pair<int, int> p;
            p.first= value;
            p.second= min(value, v.back().second );

            v.push_back(p);
        }
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
       return v.back().first;
    }
    
    int getMin() {
       return v.back(). second;
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