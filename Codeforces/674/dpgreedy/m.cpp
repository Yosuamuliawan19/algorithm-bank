#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll n, memo[8000][5], arr[5] = {50, 25, 10, 5, 1};
ll dp(ll cur, ll idx){
     if (idx >= 5) return 0;
     if (cur == 0) return 1;
     if (cur < 0) return 0;
     if (memo[cur][idx] != -1) return memo[cur][idx];
     memo[cur][idx] = dp(cur-arr[idx], idx) + dp(cur, idx+1);
     return memo[cur][idx];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     memset(memo, -1, sizeof(memo));
     while (cin >> n){
          cout << dp(n, 0) << endl;
     }


     return 0;
}
