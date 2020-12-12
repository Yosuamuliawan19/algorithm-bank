class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0, cnt = 0;
        for (auto num: nums){
            cnt = 0;
            while (num != 0){
                cnt ++;
                num /= 10;
            }
            if (cnt % 2 == 0) ans ++;
        }
        return ans;
    }
};