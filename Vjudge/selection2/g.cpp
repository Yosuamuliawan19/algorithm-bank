#include<iostream>
#include<stack>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;
int main (){
     ll n, c, ans =1;
     cin >> n >> c;
     c -= n*2;
     for (ll i=c-n+1;i<=c;i++){
          ans *= i;
          ans %= (ll) (1000000007);
     }
     for (ll i=0;i<n;i++){
          ans *= 6;
          ans %= (ll) (1000000007);
     }
     cout << ans << endl;
     return 0;
}
