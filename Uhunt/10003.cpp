#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll wood, n, arr[60];

ll memo[60][60];
ll dp (ll l, ll r){
     if (memo[l][r] != -1) return memo[l][r];
     if (l == r-1) return 0;
     ll ans = LLONG_MAX;
     for (int i=l+1;i<r;i++){
          // cout << l << " " << i <<" " << r << endl;
          // cout << arr[i] -arr[l] << " " <<arr[r] -arr[i] << endl;
          ll cur = arr[r]-arr[l] + dp(l, i) + dp (i, r);
          ans = min(cur, ans);
     }
     // cout << arr[l] << " "<< l << " " << arr[r] << " " << r << " "<< len << " " <<ans << "\n";

     return memo[l][r] = ans;
}
int main(){

     while (cin >> wood){
          if (wood == 0) break;
          memset(memo, -1, sizeof(memo));
          cin >> n;
          arr[0]=0;
          arr[n+1]=wood;
          for (int i=1;i<=n;i++){
               cin >> arr[i];
          }
          cout << "The minimum cutting is " << dp(0, n+1) << ".\n";
     }


     return 0;
}
