#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, ans[62], blk[62];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ans[0] = 1;
     blk[0] = 1;
     for (int i=1;i<62;i++){
          ans[i] = 1 + (ans[i-1] * 2);
          // cout << ans[i] << " " << i  << endl;;
          blk[i] = (ans[i-1] + 1)*(ans[i-1] + 1) + (2 * blk[i-1]);
     }


     cin >> tc;
     while (tc--){
          cin >> n;
          ll idx = 0;
          while (n >= blk[idx]){
               // cout << n << " " << ans[idx] << endl;
               n -= blk[idx];
               idx++;
          }
          cout << idx  << endl;
          // cout << "----\n";
     }

}
