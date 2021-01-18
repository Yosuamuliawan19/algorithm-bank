class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum = 0;
        mp[0] = -1;
        int ans = 0;
        
        for (int i=0;i<nums.size();i++){
            // cout << (nums[i]+sum)-k  << " " << nums[i]+sum << endl; 
            if (mp.find((nums[i] + sum)-k) != mp.end()){
                ans = max(ans, i - mp[(nums[i]+sum)-k]);
                // cout << i << " " << mp[(nums[i]+sum)-k]  << " " << (nums[i]+sum)-k  << " " << nums[i]+sum << endl;
            }
            if (mp.find(nums[i] + sum) == mp.end()){
                mp[nums[i] + sum] = i;
            }
            sum += nums[i];
        }
        return ans;
    }
};