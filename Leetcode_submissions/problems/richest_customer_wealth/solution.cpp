class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto cur: accounts){
            int sum = 0;
            for (auto i: cur){
                sum += i;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};