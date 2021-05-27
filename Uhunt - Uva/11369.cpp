#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll tc, arr[20010], n;
     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr+n, greater<int>());
          ll ans = 0;
          for (int i=2;i<n;i+=3){
               ans += arr[i];
               // cout << arr[i] << " " << endl;
          }
          cout << ans << endl;
     }


     return 0;
}
