class Solution {
public:
    vector<int> s_coins;
    vector<int> memo = vector<int>(10010, -1);
    long long dp(int amt){
        if (amt == 0) return 0;
        if (memo[amt] != -1) return memo[amt];
        long long ans = INT_MAX;
        for (int i=0;i<s_coins.size();i++){
            if (amt >= s_coins[i]) ans = min(ans, dp(amt-s_coins[i])+1);
        }
        if (ans > INT_MAX) ans = INT_MAX;
        return memo[amt] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        s_coins = coins;
        long long ans = dp(amount);
        if (ans >= INT_MAX) return -1;
        return (int) ans;
        
    }
};