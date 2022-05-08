class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r = nums.size()-1;
        if (nums.size() == 1 && nums[0] == target) return 0;
        while (r >= l) {
            int m = l + (r-l)/2;
            if (nums[m] == target){
               return m; 
            }else if (nums[m] < target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        return -1;
    }
};