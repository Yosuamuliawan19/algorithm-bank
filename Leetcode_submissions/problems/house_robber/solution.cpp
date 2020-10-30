class Solution {
public:

    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0; 
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2){
            return max(nums[0], nums[1]);
        }
        vector<int> arr(nums.size());
        
        arr[0] = nums[0];
        arr[1] = nums[1];
        arr[2] = nums[0] + nums[2];
        for (int i=3;i<nums.size();i++){
            arr[i] = nums[i] + max(arr[i-2], arr[i-3]);
        }
        int mx = 0;
        for (auto i: arr){
            mx = max(i, mx);
        }
        return mx;
    }
};