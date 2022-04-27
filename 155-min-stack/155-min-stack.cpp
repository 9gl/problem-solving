class MinStack {
public:
    stack<pair<int,int>> st;
    int x;
    MinStack() {
        
    }
    
    void push(int val) {
        x = val;
        if(st.size())
        {
            x = st.top().second;
            if(x > val) x = val;
        }
        st.push({val,x});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */