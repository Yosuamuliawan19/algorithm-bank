#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tc, n, arr[10010], memo[10010];
ll solve(ll idx){
     if (idx >= n) return 0;
     if (memo[idx] != -1) return memo[idx];
     ll ans = max(arr[idx] + solve(idx+2), solve(idx+1));
     // cout << arr[idx] << " " << ans << endl;
     return memo[idx] = ans;
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     ll ctc = 1;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          memset(memo, -1, sizeof(memo));
          cout << "Case " << ctc++ << ": " << solve(0) << "\n";
     }
     return 0;
}
