#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll n, t, arr[100010];
     cin >> n >> t;
     t--;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     bool suc = 0; ll cur = 0;
     while (cur <= t){
          if (cur == t){
               suc = 1;
               break;
          }
          cur += arr[cur];
     }
     cout << (suc ? "YES\n" : "NO\n");
     return 0;
}
