class Solution {
public:
    
    int climbStairs(int n) {
        vector<long long> memo(n+1);
        for (int i=1;i<=n;i++){
            if (i <= 2) memo[i] = i;
            else memo[i] = memo[i-1] + memo[i-2] ;
            
            // cout << memo[i] <<endl;
        }
        return memo[n];
    }
};