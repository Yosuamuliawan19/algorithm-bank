class NumArray {
public:
    vector<int> sum_arr;
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
        int sum = 0;
        sum_arr.push_back(0);
        for (int i=0;i<nums.size();i++){
            sum += nums[i];
            sum_arr.push_back(sum);
        }
        // for (int i=0;i<sum_arr.size();i++){
        //     cout << sum_arr[i] << " ";
        // }cout << endl;
    }
    
    void update(int j, int val) {
        nums[j] = val;
        int sum = sum_arr[j];
        for (int i=j+1;i<sum_arr.size();i++){
            sum += nums[i-1];
            sum_arr[i] = sum;
        }
    }
    
    int sumRange(int i, int j) {
        return sum_arr[j+1]-sum_arr[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */