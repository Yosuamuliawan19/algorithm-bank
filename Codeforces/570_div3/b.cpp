#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
int tc, n, k, cur;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n >> k;
          int mn = INT_MAX, mx = INT_MIN;
          for (int i=0;i<n;i++){
               cin >> cur;
               if (cur > mx) mx = cur;
               if (cur < mn) mn = cur;
          }
          // cout << mx << " " << mn << endl;
          // cout << mx-k << " " << mn+k << endl;
          // cout << "-----"<<endl;
          if (mx-k > mn+k){
               cout << -1 << "\n";
               continue;
          }
          cout << mn +k << endl;
     }


     return 0;
}
