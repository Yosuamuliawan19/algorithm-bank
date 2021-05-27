#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000;
ll memo[110][110];
ll solve(ll n, ll k){
     if (k == 1 || n == 0) return 1;
     if (memo[n][k] != -1) return memo[n][k];
     // cout << n <<  " " << k << endl;
     ll cur = 0, ans =  0;
     for (int i=0;i<=n;i++){
          // cout << cur << "-" << n-cur << endl;
          ans += solve(n-cur, k-1)%mod;
          cur ++;
     }
     return memo[n][k] = (ans%mod);
}
int main (){
     ll n, k;
     memset(memo, -1, sizeof(memo));
     while (cin >> n >> k){
          if (!n && !k) break;
          cout << solve(n, k)%mod << "\n";
     }

     return 0;
}
