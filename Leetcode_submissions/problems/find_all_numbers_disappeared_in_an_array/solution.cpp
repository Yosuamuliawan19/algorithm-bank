class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> cnt(nums.size(), 0);
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            cnt[nums[i]-1] ++;
        }
        for (int i=0;i<nums.size();i++){
            if (cnt[i] == 0 || cnt[i] > 2){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};