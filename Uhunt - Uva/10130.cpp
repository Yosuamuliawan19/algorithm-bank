#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, arr[1010], arr2[1010], g, cur, memo[1010][30];
ll dp (ll idx, ll cap){
     if (idx == n || cap == 0) return 0;
     if (memo[idx][cap] != -1) return memo[idx][cap];
     memo[idx][cap] = dp(idx+1, cap);
     if (cap-arr2[idx] >= 0){
          memo[idx][cap] = max(memo[idx][cap], arr[idx] + dp(idx+1, cap-arr2[idx]));
     }
     return memo[idx][cap];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll tc;
     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i] >> arr2[i];
          }
          cin >> g;
          ll ans = 0;
          for (int i=0;i<g;i++){
               cin >> cur;
               memset(memo, -1, sizeof(memo));
               ans += dp(0, cur);
          }
          cout << ans << "\n";
     }
     return 0;
}
