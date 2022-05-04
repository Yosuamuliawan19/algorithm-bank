class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> mp;
        for (int cur: nums){
            if (mp.find(cur) != mp.end()){
                return true;
            }else{
                mp[cur] = true;
            }
        }
        return false;
    }
};