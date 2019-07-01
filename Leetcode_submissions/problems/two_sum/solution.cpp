class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = vector<int>(2,0);
        for (int i=0;i<nums.size();i++){
            for (int j=0;j<nums.size();j++){
                if (i==j) continue;
                if (nums[i] + nums[j] == target){
                    ans[0] = i; ans[1] = j;
                    return ans;
                }
            }
        }
        return ans;
    }
};