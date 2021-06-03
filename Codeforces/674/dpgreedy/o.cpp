#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, m;
ll arr[110][110];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          memset(arr, 0, sizeof(arr));
          for (int i=1;i<=n;i++){
               for (int j=1;j<=m;j++){
                    cin >> arr[i][j];
                    arr[i][j] += max(arr[i-1][j-1], max(arr[i-1][j], arr[i-1][j+1]));
               }
          }
          ll ans = arr[n][1];
          for (int i=2;i<=m;i++){
               ans = max(ans,  arr[n][i]);
          }
          cout << ans << "\n" ;

     }

     return 0;
}
