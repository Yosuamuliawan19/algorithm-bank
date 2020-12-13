class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int a = 0, b= n;
        while (a != n){
            ans.push_back(nums[a++]);
            ans.push_back(nums[b++]);
        }
        return ans;
    }
};