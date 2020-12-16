class Solution {
public:
    bool canJump(vector<int>& nums) {
        int furthest = nums[0];
        for (int i=1;i<=furthest;i++){
            if (furthest == nums.size()-1 || i >= nums.size()-1) return 1;
            // cout << i <<  "  " << nums[i] << endl;
            furthest = max(furthest, i+nums[i]);
            
            // cout <<furthest << endl;
        }
        return furthest == nums.size()-1;
    }
};