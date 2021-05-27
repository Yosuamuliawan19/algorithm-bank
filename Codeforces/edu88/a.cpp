#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mn(int a, int b){
     if (a > b) return b;
     return a;
}
int mx(int a, int b){
     if (a < b) return b;
     return a;
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     ll tc, n, m, k;
     // cout <<" hello\n";
     cin >> tc;
     while (tc--){
          cin >> n >> m >> k;
          if (m < n/k){
               cout << m << endl;
               continue;
          }
          ll ans = n/k;
          double x = m - (n/k);
          // cout << (k-1) << endl;
          // cout << x << " " << k-1 <<  " " << ceil(x/(k-1)) << endl;

          x = ceil(x/(k-1));
          cout << ans- x << endl;





     }
}
