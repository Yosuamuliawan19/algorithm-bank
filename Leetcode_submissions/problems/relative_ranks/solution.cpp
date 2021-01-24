class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        map<int,int> mp;
        vector<int> nums2 = nums;
        int n = nums.size();
        vector<string> ans(nums.size(), "");
        sort(nums2.begin(), nums2.end(), greater<int>());
        
        for (int i=0;i<n;i++){
            mp[nums2[i]] = i+1;
        }
        for (int i=0;i<n;i++){
            if (mp[nums[i]] == 1){
                ans[i] = "Gold Medal";
            }else if (mp[nums[i]] == 2){
                ans[i] = "Silver Medal";
            }else if (mp[nums[i]] == 3){
                ans[i] = "Bronze Medal";
            }else{
                ans[i] = to_string(mp[nums[i]]);
            }
        }
        
        return ans;
    }
};