class Solution {
public:
    long long ans = 0;
    long long f, target;
    long long mod = 1000000007; 
    
    long long memo[35][1010] = {0};
    long long rec(long long d, long long sum){
        if (d == 0){
            if (sum == 0){
                return 1;
            }
            return 0;
        }
        if (d*f < sum) return 0;
        if (sum <= 0) return 0;
        if (memo[d][sum] != -1) return memo[d][sum];
        long long ret = 0;
        
        for (int i=f;i>=1;i--){
            if (sum-i > (d-1) * f) break;
            ret = (ret + rec(d-1, sum-i))%mod;
        }
        return memo[d][sum] = ret%mod;

    }
    int numRollsToTarget(int d, int f, int target) {
        this->f = min(f, target);
        this->target = target;
        
        memset(memo, -1, sizeof(memo));
        
        return rec(d, target);
    }
};