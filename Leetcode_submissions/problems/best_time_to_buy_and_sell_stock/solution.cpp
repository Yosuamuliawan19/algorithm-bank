class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int ans = 0, mn = prices[0];
        for (int i=0;i<prices.size();i++){
            if (mn > prices[i]){
                mn = prices[i];
            }else{
                ans = max(ans, prices[i] - mn);
            }
        }
        return ans;
    }
};