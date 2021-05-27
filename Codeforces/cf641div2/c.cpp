#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
ll arr[100010] = {0};
bool isPrime[1000];
vector<ll> pl;
ll mn (ll a, ll b){
     if (a > b){
          return b;
     }else{
          return a;
     }
}
void sieve(){
     for (ll i=2;i<1000;i++){
          if (isPrime[i]){
               for (ll j=2*i;j<1000;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
     for (ll i=2;i<1000;i++){
          if (isPrime[i]){
               pl.push_back(i);
               // cout << i << endl;
          }
     }
}

void solve(){
     ll ans = 1;
     for (int i=0;i<pl.size();i++){
          ll pf = pl[i];
          ll cnt = 0;
          ll min_ft = 20000;
          while (true){
               for (int j=0;j<n;j++){
                    if (arr[j] % pf == 0){
                         cnt ++;
                         ll ft = 0;
                         ll cur = arr[j];
                         while (cur % pf == 0){
                              cur /= pf;
                              ft++;
                         }
                         min_ft = mn(min_ft, ft);
                    }
               }
          }
          // if (cnt >= n-1){
               cout << pf << " " << cnt <<" " << min_ft << endl;
          // }
          //
          if (pf > 10) break;
     }



}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     memset(isPrime, 1, sizeof(isPrime));
     sieve();
     cout << pl.size() << endl;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     solve();
}
