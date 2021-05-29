#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[5] = {50, 25, 10, 5, 1};
ll memo[8000][5] = {0};
ll solve(ll cur, ll idx){
     if (memo[cur][idx] != -1) return memo[cur][idx];
     if (cur == 0) return 1;
     if (idx == 5) return 0;
     ll ans = solve(cur, idx + 1);
     if (cur >= arr[idx]){
          ans += solve(cur - arr[idx], idx);
     }
     return memo[cur][idx] = ans;
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n;
     memset(memo, -1, sizeof(memo));
     while (cin >> n){
          cout << solve(n, 0) << "\n";
     }


     return 0;
}
