class Solution {
public:
//     int mod = 1e9 + 7;
//     int targetVal, df;
//     int ans = 0;
    
//     void solve(int throws, int val){
//         if (throws == 0){
//             if (val == targetVal) ans++;
//             return;
//         }
//         int curface = df;
//         while ((((throws-1) * df) + val + curface) >= targetVal){
//             solve(throws-1, val+curface);
//             curface--;
//         }
//     }
//     int numRollsToTarget(int d, int f, int target) {
//         if (f * d < target) return 0;
//         targetVal = target; df = f;
//         solve(d, 0); 
//         cout << ans <<endl;
//         return ans;
//     }
    
    int ans = 0, face;
    int mod = 1e9 + 7;
    int memo[31][1010];
    int solve(int throws, int left){
        if  (memo[throws][left] != -1){
            return memo[throws][left];
        } 
        // cout << throws << " " << left << endl;
        if (throws == 1){
            if (left <= face && left != 0) return 1;
            return 0;
        }   
        // int cur = (-1*face*(throws-1)) + left; 
        int cur = 1;
        int ans = 0;
        while (left-cur >= throws-1 && cur <= face){
            // if (face * (throws-1) >= left-cur) solve(throws-1, left-cur);
            ans = (ans + solve(throws-1, left-cur)) % mod;
            cur++;
        }
        return memo[throws][left] = ans % mod;
    }
    
    int numRollsToTarget(int d, int f, int target) {
        if (f * d < target) return 0;
        face = f;
        memset(memo, -1, sizeof(memo));
        return solve(d, target) % mod; 
    }
};