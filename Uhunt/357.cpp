#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[5] = {1, 5, 10, 25, 50};
ll memo[30010][5] = {0};
ll cc(ll n, ll idx){
     if (idx == 5){
          if (n == 0) return 1;
          else return 0;
     }

     if (memo[n][idx] != -1) return memo[n][idx];
     if (n - arr[idx] >= 0){
          return memo[n][idx] = cc(n -arr[idx], idx) + cc(n, idx+1);
     }
     return memo[n][idx] = cc(n, idx+1);
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n;
     memset(memo, -1, sizeof(memo));
     while (cin >> n){
          ll ans = cc(n, 0);

          if (ans == 1){
               cout << "There is only 1 way to produce "  << n << " cents change." << "\n";
          }else{
               cout << "There are " << ans << " ways to produce " << n << " cents change." << "\n";
          }


     }


     return 0;
}
