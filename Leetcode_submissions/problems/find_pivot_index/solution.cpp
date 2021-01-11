class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum = 0;
        for (int cur: nums) totSum += cur;
        int cur = 0;
        for (int i=0;i<nums.size();i++){
            if (cur == totSum - nums[i] - cur){
                return i;
            }
            cur += nums[i];
        }
        return -1;
    }
};