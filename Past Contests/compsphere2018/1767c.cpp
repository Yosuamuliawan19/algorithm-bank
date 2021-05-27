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
ll tc, k, r, w[110], val[110], n, memo[60][110], peso[60][110], packet[60][110];
ll knap(int cap, int idx){
     if (idx >= n || cap <= 0) return 0;
     if (memo[cap][idx] != -1) return memo[cap][idx];
     if (cap-w[idx] >= 0){
          ll val1 = val[idx] + knap(cap-w[idx], idx+1);
          ll val2 = knap(cap,idx+1);
          if (val1 > val2){
               peso[cap][idx] = peso[cap-w[idx]][idx+1] + w[idx];
               packet[cap][idx] = packet[cap-w[idx]][idx+1] + 1;
          }else{
               peso[cap][idx] = peso[cap][idx+1];
               packet[cap][idx] =  packet[cap][idx+1];
          }
          memo[cap][idx] = max(val1 , val2);
     }else{
          memo[cap][idx] = knap(cap, idx+1);
     }
     return memo[cap][idx];
}
int main(){
     cin >> tc;
     while (tc--){
          memset(memo,-1,sizeof(memo));
          memset(packet,0,sizeof(packet));
          memset(peso,0,sizeof(peso));
          cin >> n;
          for (ll i=0;i<n;i++) cin >> val[i] >> w[i];
          ll ans = knap(50, 0);
          printf("%lld brinquedos\n", ans);
		printf("Peso: %lld kg\n", peso[50][0]);
		printf("sobra(m) %lld pacote(s)\n\n",n-packet[50][0]);
     }
}
