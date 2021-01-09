class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int l = 0, r = 1;
        int ans = 1;
        while (r != nums.size()){
            // printf("l = %d, r = %d, %d\n", l, r, nums[r]);
            if (nums[r-1] >= nums[r]) {
                l = r;
                // printf("found desc\n");
            }
              ans = max(ans, r-l+1);
            r++;
          
        }
        return ans;
    }
};