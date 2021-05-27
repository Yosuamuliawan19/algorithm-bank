#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll mod = 1000000007;

ll mypow(ll a, ll b){
     if (a == 0) return 0;
     if (b == 0) return 1;
     if (b % 2 == 0){
          ll ans = mypow(a, b/2) % mod;
          return (ans*ans) % mod;
     }
     ll ans = a % mod;
     return (ans * mypow(a, b-1) % mod) % mod;
}
ll tc, n, k; string cur;
int main (){
     cin >> tc;
     for (ll t=1;t<=tc;t++){
          cin >> n >> k >> cur;
          ll ans = 0;

          // start of ans

          cout << cur << endl;
          ll cons = 0; if (cur[0] == 'B') cons = 1;
          // cout << cons;
          for (ll i=1;i<n;i++){
               if (cur[i] == 'B') {
                    cons ++;
               }else{
                    cons --;
               }
               // cout << cons;
               if (cons  >= k ){

                    // cout << i-k << endl;
                    // cout << i - k + 1 << endl;
                    //
                    // // cons = 2;
                    // cons = 1;
                    // ans += mypow(2, i - k + 2);

                    ll idx = i - k + 1;
                    while (cur[idx] != 'B') {
                         cons --;
                         idx++;
                    }
                    cout << idx << endl;
                    ans += mypow(2, idx);




               }
          }
          // cout << endl;






          // end of ans

          cout << "Case #"<< t <<": " << ans << "\n";
          cout << "-----\n";
     }



     return 0;
}
