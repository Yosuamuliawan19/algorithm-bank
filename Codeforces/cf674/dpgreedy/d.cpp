#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int ans[110];
     ll m, s, n;

     cin >> m >> s; n = s;
     if (s == 0){
          if (m == 1){
               cout << "0 0\n";
               return 0;
          }else{
               cout << "-1 -1\n";
               return 0;
          }
     }
     for (int i=0;i<m;i++){
          if (n > 9){
               n -= 9;
               ans[i] = 9;
          }else{
               if (m-i == 1){
                    ans[i] = n;
                    n = 0;
               }else{
                    ans[i] = n-1;
                    n = 1;
               }
          }
     }


     if (n != 0) cout << "-1 ";
     else{
          for (int i=m-1;i>=0;i--){
               cout << ans[i];
          }cout << " ";
     }
     n = s;
     memset(ans, 0, sizeof(ans));

     for (int i=0;i<m;i++){
          if (n == 0) break;
          if (n > 9){
               ans[i] = 9;
               n-=9;
          }else{
               ans[i] = n;
               n = 0;
               break;
          }
     }
     if (n != 0) cout << "-1\n";
     else{
          for (int i=0;i<m;i++){
               cout << ans[i];
          }cout << "\n";
     }





     return 0;
}
