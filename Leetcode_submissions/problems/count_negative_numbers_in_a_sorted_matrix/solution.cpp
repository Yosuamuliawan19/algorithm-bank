class Solution {
public:
    
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for (auto i: grid){
            for (auto j: i){
                ans += (j < 0);
            }
        }
        return ans;
    }
};