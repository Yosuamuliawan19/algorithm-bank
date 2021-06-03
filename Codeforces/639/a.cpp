#include<bits/stdc++.h>
#define long long ll;

using namespace std;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     int tc, n, m;
     cin >> tc ;
     while (tc--){
          cin >> n >> m;
          if (n == 1 || m == 1){
               cout << "YES\n";
               continue;
          }
          if (n <= 2 && m <= 2){
               cout << "YES\n";
          }else cout << "NO\n";

     }
}
