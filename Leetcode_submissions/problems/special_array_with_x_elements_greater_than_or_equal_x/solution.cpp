class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=1;i<=nums.size();i++){
            int cnt = nums.size();
            for (int j=0;j<nums.size();j++){
                if (nums[j] < i){
                    cnt--;
                }
            }
            
            if (cnt == i) return cnt;
        }
        return -1;
    }
};