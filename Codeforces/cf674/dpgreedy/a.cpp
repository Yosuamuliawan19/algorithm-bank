#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, m, cur;
ll arr[100010];
ll ans[100010];
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n >> m;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          // cout << arr[i] << endl;
     } 
     sort(arr, arr+n);
     cur = 1; ll idx = 0, idx2 =0 ;
     while (m > 0){
          // cout << cur << " "<< arr[idx] << "\n";
          if (cur == arr[idx]){
               idx++; cur++; continue;
          }
          if (m >= cur){
               m -= cur;
               ans[idx2++] =cur;
               cur++;
          }else{
               break;
          }
     }
     cout << idx2 << "\n";
     for (int i=0;i<idx2;i++){
          cout << ans[i];
          if (i != idx2-1) cout << " ";
          // cout << arr[i] << endl;
     }
     cout << "\n";
}
