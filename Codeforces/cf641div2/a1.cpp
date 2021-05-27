#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n, k;
bool isPrime[2000];
vector<ll> pl;
ll memo[1000100] = {0};
ll mn (ll a, ll b){
     if (a > b){
          return b;
     }else{
          return a;
     }
}

void sieve(){
     isPrime[1] = false;
     for (ll i=2;i<1100;i++){
          if (isPrime[i]){
               for (ll j=2*i;j<1100;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
     for (ll i=1;i<1100;i++){
          if (isPrime[i]){
               pl.push_back(i);
               // cout << i << endl;
          }
     }
}



ll f(ll n){
     if (n % 2 == 0) return 2;
     if (memo[n] != 0) return memo[n];
     ll ans = n;
     for (int i=0;i<pl.size();i++){
          if (pl[i] >= sqrt(n) + 1) break;
          if (n % pl[i] != 0 || n /pl[i] == 1) continue;
          ans = mn(ans, mn(pl[i], n/pl[i]));
     }
     memo[n] = ans;
     return ans;
}

ll solve(ll n, ll k){
     if (n % 2 == 0){
          return n + (k*2);
     }
     for (int i=0;i<k;i++){
          if (n % 2 == 0){
               return n + ((k-i) *2);
          }
          n += f(n);
     }
     return n;
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     memset(isPrime, 1, sizeof(isPrime));
     sieve();


     cin >> tc;
     while (tc--){
          cin >> n >> k;
          cout << solve(n, k) << endl;
     }
}
