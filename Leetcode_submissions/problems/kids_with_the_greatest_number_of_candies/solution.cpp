class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for (auto i: candies){
            mx = max(mx, i);
        }
        vector<bool> ans;
        for (auto i: candies){
            if (i+extraCandies >= mx) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};