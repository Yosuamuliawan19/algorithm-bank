#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n, k;
bool isPrime[2000];
vector<ll> pl;
ll memo[1000100];
void sieve(){
     memset(isPrime,1,sizeof(isPrime));
     for (int i=2;i<1100;i++){
          if (isPrime[i]){
               for (int j=i*2;j<1100;j+=i){
                    isPrime[j] = false;
               }
          }
     }
     for (int i=2;i<1100;i++){
          if (isPrime[i]){
               // cout << i << endl;
               pl.push_back(i);
          }
     }
}
ll f(ll n){
     if (memo[n] != 0){
          return memo[n];
     }

     ll x = n;
     for (int i=0;i<pl.size();i++){
          if (pl[i] > sqrt(n) + 1) break;

          if (n % pl[i]!= 0){
               continue;
          }
          if (pl[i] > n/pl[i] && n/pl[i] != 1){
               x = n /pl[i];
          }else{
               x = pl[i];
          }
          break;
     }
     return memo[n] = x;
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     sieve();
     memset(memo, 0, sizeof(memo));

     cin >> tc;
     while (tc--){
          cin >> n >> k;
          ll cur = n;
          for (int i=0;i<k;i++){
               cur = f(n);
               n += cur;
          }
          cout <<  n << endl;
     }
}
