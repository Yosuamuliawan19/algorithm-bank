#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, k, arr[1100], ans;

int main (){
     cin >> tc;
     while (tc--){
          cin >> n >> k;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr+n);
          // cout << arr[0] << endl;
          ans = 0;
          for (int i=1;i<n;i++){
               // cout << "--- " << floor(((double) k - arr[i]) / (double) arr[0]) << endl;
               ans += floor(((double) k - arr[i]) / (double) arr[0]);
          }
          cout << ans << endl;
     }

     return 0;
}
