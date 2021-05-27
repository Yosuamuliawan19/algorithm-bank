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
     ll tc, a, b;
     // cout <<" hello\n";
     cin >> tc;
     while (tc--){
          cin >> a >> b;
          ll x = mx(2*a, b);
          ll y = mx(2*b, a);
          ll z = mx(a+b, mx(a,b));
          ll ans = mn(mn(x, y), z);
          cout << ans*ans << endl;
     }
}
