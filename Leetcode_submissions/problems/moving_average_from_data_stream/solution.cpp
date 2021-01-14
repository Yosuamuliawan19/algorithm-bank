class MovingAverage {
public:
    queue<int> q;
    int sum = 0, size = 0;
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        this->size = size;
    }
    
    double next(int val) {
        if (q.size() >= size){
            sum -= q.front();
            // cout << "popping " << q.front() << endl;
            sum += val;
            q.pop();
            q.push(val);
        }else{
            q.push(val);
            sum += val;
        }
        return (double) (sum) / (double) q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */