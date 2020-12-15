class MyStack {
public:
    queue<int> q1, q2;
    bool f = 1;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if (q2.empty()){
            q1.push(x);
        }else{
            q2.push(x);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if (q2.empty()){
            int ans = 0;
            while (!q1.empty()){
                ans = q1.front();
                if (q1.size() != 1)
                q2.push(q1.front());
                q1.pop();
            }
            return ans;
        }else{
            int ans = 0;
            while (!q2.empty()){
                ans = q2.front();
                if (q2.size() != 1)
                q1.push(q2.front());
                q2.pop();
            }
            return ans;
        }
    }
    
    /** Get the top element. */
    int top() {
        if (q2.empty()){
            int ans = 0;
            while (!q1.empty()){
                ans = q1.front();
                q2.push(q1.front());
                q1.pop();
            }
            return ans;
        }else{
            int ans = 0;
            while (!q2.empty()){
                ans = q2.front();
                q1.push(q2.front());
                q2.pop();
            }
            return ans;
        }
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (q1.size() + q2.size() == 0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */