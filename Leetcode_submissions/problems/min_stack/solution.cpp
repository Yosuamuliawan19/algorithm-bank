class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v = vector<int>(1);
    int idx = 0;
    MinStack() {
        
    }
    
    void push(int x) {
        v.push_back(0);
        v[idx++] = x;
    }
    
    void pop() {
        idx--;
    }
    
    int top() {
        return v[idx-1];
    }
    
    int getMin() {
        int mn = INT_MAX;
        for (int i=0;i<idx;i++){
            mn = min(mn, v[i]);
        }
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */