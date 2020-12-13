class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for (auto i: nums) sum += i;
        
        int cur = 0;
        vector<int> ans;
        for (int i=nums.size()-1;i>=0;i--){
            if (cur > sum-cur) break;
            cur += nums[i];
            ans.push_back(nums[i]);
        }
        return ans;
    }
};