#include<iostream>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>

#include<string>
typedef long long ll;
using namespace std;
ll tc, k, r, w[60], val[60], n, memo[1000][100];
ll knap(int cap, int idx){
     if (idx >= n || cap <= 0) return 0;
     if (memo[cap][idx] != -1) return memo[cap][idx];
     if (cap-w[idx] >= 0) memo[cap][idx] = max(val[idx] + knap(cap-w[idx], idx+1) , knap(cap,idx+1));
     else memo[cap][idx] = knap(cap, idx+1);
     return memo[cap][idx];
}
int main(){
     cin >> tc;
     while (tc--){
          memset(memo,-1,sizeof(memo));
          cin >> n;
          for (ll i=0;i<n;i++) cin >> val[i] >> w[i];
          cin >> k >> r;
          ll ans = knap(k, 0);
          // cout << ans <<" " << r<<endl;
          if (ans >= r){
               cout << "Missao completada com sucesso\n";
          }else{
               cout << "Falha na missao\n";
          }
     }
}
