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
     ll tc, n, m, x, y;
     char arr[110][1100];
     cin >> tc;
     while (tc--){
          cin >> n >> m >> x >> y;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
               }
          }
          ll a = mn(2*x, y);
          ll b = x;

          ll ans = 0;

          ll cnt = 0;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    if (arr[i][j] == '.'){
                         cnt ++;
                    }else{
                         if (cnt != 0){
                              // cout << cnt << endl;

                              ans += (cnt/2)*a;
                              if (cnt % 2 != 0) ans += b;
                         }
                         cnt = 0;
                    }
                    if (j == m-1){
                         if (cnt != 0){
                              // cout << cnt << endl;
                              ans += (cnt/2)*a;
                              if (cnt % 2 != 0) ans += b;
                         }
                         cnt = 0;
                    }
               }
          }
          // cout << "-----" << endl;

          cout << ans << "\n";

          // cout << 2*x << " " << y << endl;





     }
}
