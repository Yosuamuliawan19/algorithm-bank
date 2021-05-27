#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, q, arr[1000010], mx = -1;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> n >> q;
     for (int i=0;i<n;i++) {
          cin >> arr[i];
          if (arr[i] > mx){
               mx = arr[i];
          }
     }
     ll l=0,r=mx;
     ll ans;
     while (r >= l){
          ll m = l + (r-l)/2;
          ll tot = 0;
          for (int i=0;i<n;i++){
               if (arr[i] > m){
                    tot += arr[i] - m;
               }
          }
          // cout << l << " " << m << " " << r << " " << tot << endl;
          if (tot >= q){
               l = m+1;
               ans = m;
          }else{
               r = m-1;
          }
     }
     cout << ans << endl;

     return 0;
}
