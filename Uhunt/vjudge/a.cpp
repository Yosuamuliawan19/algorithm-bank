#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n, m, arr[100010];
     cin >> n >> m;
     for (int i=0;i<n-1;i++){
          cin >> arr[i];
     }
     bool f = 0;
     ll idx = 0;
     while (idx < n){
          // cout << idx << endl;
          if (idx + 1 == m){
               f = 1;
               break;
          }
          if (idx == n-1) break;
          idx += arr[idx];
     }
     if (f) cout << "YES\n";
     else cout << "NO\n";
     return 0;
}
