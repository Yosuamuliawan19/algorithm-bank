class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0, prev = 0, cnt = 0;
        for (int i=0;i<nums.size();i++){
            if (prev == nums[i]){
                cnt++;
            }else{
                prev = nums[i];
                cnt = 1;
            }
            if (cnt <= 2){
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};