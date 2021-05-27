#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tc, n, c, arr[100010];

int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          cin >> n >> c;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr + n);


          ll l=0, r=arr[n-1]-arr[0];
          ll ans = 0;
          while (r >= l){
               ll m = l + (r-l)/2;

               ll prev_pos = arr[0], cur_c = 1;
               // cout << l << "-" << m << "-" << r << endl   ;

               for (int i=1;i<n;i++){
                    if (arr[i]-prev_pos >= m){
                         prev_pos = arr[i];
                         cur_c++;
                         // cout << arr[i] << " ";
                    }
                    if (cur_c > c) break;
               }
               // cout << endl;

               if (cur_c >= c){
                    ans = m;
                    // cout << m << " ---- \n";
                    l = m+1;
               }else{
                    r = m-1;
               }
               // cout << l << "-" << m << "-" << r << endl   ;

          }
          cout << ans << endl;
     }




     return 0;
}
