class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        int sum = 0;
        arr.push_back(0);
        for (int num: nums){
            arr.push_back(sum += num);
        }
    }
    
    int sumRange(int i, int j) {
        return arr[j+1] - arr[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */