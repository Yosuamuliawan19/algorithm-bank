class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > nums; 
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int cur: nums){
            this->nums.push(cur);
            if (this->nums.size() > k) this->nums.pop();
        }
    }
    
    int add(int val) {
        nums.push(val);
        if (nums.size() > k) nums.pop();
        return nums.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */