#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll type[11] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
double n;
ll memo[30010][12] = {0};
ll cc(ll num, ll idx){
     if (num == 0) return 1;
     if (idx >= 11) return 0;
     if (memo[num][idx] != -1) return memo[num][idx];
     memo[num][idx] = cc(num, idx+1);
     if (num - type[idx] >= 0){
          memo[num][idx] += cc(num-type[idx], idx);
     }
     return memo[num][idx];
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     memset(memo, -1, sizeof(memo));
     while (cin >> n){
          if (n == 0) break;
          ll cur = (ll) lround(n*100.0);
          cout <<  setw(6) << setprecision(2) << fixed << n ;
          cout <<  setw(17) << right << cc(cur, 0) << endl;
     }
     return 0;
}
