#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, tar, n, arr[110];

ll memo[100][20000];

ll dp(ll idx, ll amt){
     if (idx == n){
          return 0;
     }
     if (memo[idx][amt] != -1) return memo[idx][amt];
     if (amt+arr[idx] >= tar){
          memo[idx][amt] = 1 + dp(idx+1, amt+arr[idx]);
     }else{
          memo[idx][amt] = min(dp(idx+1, amt), 1 + dp(idx+1, amt+arr[idx]));
     }
     cout << idx << " " << amt << " " << memo[idx][amt] << endl;

     return memo[idx][amt];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          // bestval = LLONG_MAX, bestamt = LLONG_MAX;

          cin >> tar >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          memset(memo, -1, sizeof(memo));
          cout << dp(0, 0) << "\n";

          // cout << bestval <<" " << bestamt << "\n";
     }

     return 0;
}
