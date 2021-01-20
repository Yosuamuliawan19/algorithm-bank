class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0, cur = 0;
        for (int i=0;i<k;i++){
            cur += (nums[i]/(double) k);
        }
        ans = cur;
        for (int i=k;i<nums.size();i++){
            cur += (nums[i]/(double) k);
            cur -=(nums[i-k]/(double) k);
            ans = max(ans, cur);
        }
        return ans;
    }
};