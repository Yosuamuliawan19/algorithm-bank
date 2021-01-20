class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> cnt(nums.size()+1, 0);
        for (int a: nums){
            cnt[a] ++;
        }
        int dup, mis;
        for (int i=1;i<cnt.size();i++){
            if (cnt[i] >= 2) dup = i;
            if (cnt[i] == 0) mis = i;
        }
        return vector<int>({dup, mis});
    }
};