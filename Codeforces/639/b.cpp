#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     ll tc, n;
     // precomp
     ll lim = 25825;
     vector<ll> arr = vector<ll>(25830, 0);
     for (int i=1;i<=lim;i++){
          arr[i] = arr[i-1] + (i*2) + (i-1);
     }
     // for (int i=1;i<5;i++){
     //      cout << arr[i] << "--" << endl;
     // }


     cin >> tc ;
     while (tc--){
          cin >> n;
          ll ans = 0;
          while (n != 0){
               ll l = 0, r = lim, m;
               while (l <= r){
                    m = l + (r-l)/2;
                    // cout << l << " " << r << " " << m << " " << arr[m] <<  endl;
                    if (arr[m] == n){
                         break;
                    }
                    if (n > arr[m]){
                         l = m;
                    }else{
                         r = m;
                    }
                    if (r-l <= 1){
                         m = l;
                         break;
                    }
               }
               if (arr[m] == 0) break;
               // cout << n << " " << arr[m] << endl;
               n -= arr[m];
               ans ++;
               if (n <= 0) break;
          }
          cout << ans << "\n";
     }
}
