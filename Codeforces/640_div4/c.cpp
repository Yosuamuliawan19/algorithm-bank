#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n, k;

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          cin >> n >> k;
          // cout << k%n << " " << k/n << " " << endl;
          // cout << n*((k/(n-1))) << endl;
          // cout << n*((k/(n-1))) << endl;

          ll a = n*((k/(n-1)));
          ll b = k%(n-1);
          // cout << a << "-- " << b << endl;
          //
          if (b == 0){
               a -= n;
               b = n-1;
          }

          cout << a +b<<endl;
     }
}
