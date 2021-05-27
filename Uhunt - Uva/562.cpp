#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[110] = {0}, n, tc;
ll memo[110][60000] = {0};
ll knap(ll idx, ll cap){
     if (idx == n) return 0;
     if (memo[idx][cap] != -1) return memo[idx][cap];
     if (cap - arr[idx] >= 0){
          memo[idx][cap] = max(knap(idx+1, cap), arr[idx] + knap(idx+1, cap-arr[idx]));
     }else{
          memo[idx][cap] = knap(idx+1, cap);
     }
     // cout << idx <<" " << cap << " " << memo[cap][idx] << "\n";
     return memo[idx][cap];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          memset(memo, -1, sizeof(memo));
          cin >> n;
          ll tot = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               tot += arr[i];
          }
          ll ans = knap(0, tot/2);

          cout << abs(ans - (tot-ans)) << endl;
     }
     return 0;
}
