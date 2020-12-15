class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int> > mp;
        for (int i=0;i<nums.size();i++){
            if (mp.find(nums[i]) == mp.end()) mp[nums[i]] = vector<int>({i});
            else
            mp[nums[i]].push_back(i);
        }
        for (auto it: mp){
            if (it.second.size() == 1) continue;
            for (int i=1;i<it.second.size();i++){
                 if (it.second[i] - it.second[i-1] <= k) return 1;
            }
           
        }
        
        return 0;
        
        
    }
};