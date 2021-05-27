#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n, arr[1000100];
     while (cin >> n){
          if (n == 0) break;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          ll si = 0, bi = 0;
          ll ans = 0;
          while (1){
               while (si < n && arr[si] <= 0) si++;
               while (bi < n && arr[bi] >= 0) bi++;
               // cout << arr[si] << " " << arr[bi] << endl;

               if (si == n && bi == n) break;

               ll cur = min(-arr[bi], arr[si]);
               ans += cur * abs(si-bi);
               arr[bi] += cur;
               arr[si] -= cur;

               // if (arr[si] > -1* arr[bi]){
               //      ans += abs(si - bi) * (arr[si] + arr[bi]);
               //      arr[si] += arr[bi];
               //      arr[bi] = 0;
               // }else if (arr[si] == -1* arr[bi]){
               //      ans += abs(si - bi) * arr[si];
               //      arr[si] = arr[bi] = 0;
               // }else{
               //      ans += abs(si - bi) * (-1* arr[bi] - arr[si]);
               //      arr[bi] += arr[si];
               //      arr[si] = 0;
               // }
               // cout << arr[si] << " " << arr[bi] << endl;


               // cout << ans << endl;
               // break;
          }
          cout << ans << endl;

     }





     return 0;
}
