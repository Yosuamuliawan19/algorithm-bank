#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll s, n, arr[2010], arr2[2010], mx = 0;
ll memo[2010][2010] = {0};
ll dp(ll cap, ll idx){
     // cout << cap << " " << idx << endl;
     if (idx == n) return 0;
     if (memo[cap][idx] != -1) return memo[cap][idx];
     if (cap-arr[idx] >= 0){
          memo[cap][idx] = max(dp(cap,idx+1), arr2[idx] + dp(cap-arr[idx], idx+1));
     }else{
          memo[cap][idx] = dp(cap, idx+1);
     }
     return memo[cap][idx];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);

     cin >> s >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i] >> arr2[i];
     }
     memset(memo, -1, sizeof(memo));
     cout << dp(s, 0) <<"\n";
     return 0;
}
