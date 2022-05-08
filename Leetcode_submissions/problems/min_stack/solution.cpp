class MinStack {
    
    int idx;
     vector<pair<int, int>> arr;
    
public:
    MinStack() {
        idx = 0;
        arr = vector<pair<int,int>>();
    }
    
    void push(int val){
        pair<int,int> node = make_pair(val, min(this->getMin(), val));
        if (idx == arr.size()) arr.push_back(node);
        else arr[idx] = node;
        idx++;
    }
    
    void pop() {   
        idx --;
    }
    
    int top() {
        return arr[idx-1].first;
    }
    
    int getMin() {
        if (idx == 0) return INT_MAX;
        return arr[idx-1].second;
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