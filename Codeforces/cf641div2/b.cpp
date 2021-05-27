#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;
ll arr[100010] = {0};
ll memo[100010] = {0};

bool isPrime[100010];
vector<ll> pl;

void sieve(){
     for (ll i=2;i<100010;i++){
          if (isPrime[i]){
               for (ll j=2*i;j<100010;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
     for (ll i=1;i<100010;i++){
          if (isPrime[i]){
               pl.push_back(i);
               // cout << i << endl;
          }
     }
}
ll final_ans = 1;
void f(ll x, ll ans){
     if (memo[x] >= ans) return;
     memo[x] = ans;
     if (ans > final_ans){
          final_ans = ans;
     }
     for (int i=x*2;i<=n;i+=x){
          if (arr[i] > arr[x]){
               f(i, ans+1);
          }else{
               f(i, 1);
          }
     }
}

int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);

     memset(isPrime, 1, sizeof(isPrime));
     sieve();


     cin >> tc;
     while (tc--){
          final_ans = 1;
          memset(memo, 0, sizeof(memo));

          cin >> n;
          for (int i=1;i<=n;i++){
               cin >> arr[i];
          }
          for (int i=0;i<pl.size();i++){
               if (pl[i] > n) break;
               f(pl[i], 1);
          }
          cout << final_ans << endl;
     }
}
