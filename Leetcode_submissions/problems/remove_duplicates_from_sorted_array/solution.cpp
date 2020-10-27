class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int len = 1, prev = nums[0];
        for (int i=1;i<nums.size();i++){
            if (nums[i] != prev){
                 nums[len++] = nums[i];
            }
            prev = nums[i];
        }
        return len;
    }
};