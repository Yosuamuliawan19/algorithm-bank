#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[110] = {0};
ll memo[10010][110];
ll solve(ll n, ll idx){
     if (idx == 0){
          if (n != 0){
               return LLONG_MAX;
          }else return 0;
     }
     if (n == arr[idx]) return 1;
     if (memo[n][idx] != -1) return memo[n][idx];
     if (n - arr[idx] >= 0){
          ll cur = floor(n / arr[idx]);
          memo[n][idx] = min(solve(n, idx-1), cur + solve(n - (arr[idx]*cur),idx-1));
     }else {
          memo[n][idx] = solve(n, idx-1);
     }
     // cout << n << " " << idx << " " << memo[n][idx] << endl;
     return memo[n][idx];
}
int main (){
     ll tc, n;
     memset(memo, -1, sizeof(memo));
     for (int i=1;i<=110;i++){
          arr[i] = i*i;
     }
     cin >> tc;
     while (tc--){
          cin >> n;
          cout << solve(n, 101) << "\n";
          // cout << n << endl;
     }

     return 0;
}
