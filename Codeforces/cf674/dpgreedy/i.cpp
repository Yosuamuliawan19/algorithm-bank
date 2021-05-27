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

     ll n, m, arr[300010];
     cin >> n >> m ;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     ll l = 0, r = 0, cur = 0, mx = 0;
     while (r != n){
          if (arr[r] + cur <= m){
               cur += arr[r];
               mx = max(cur, mx);
               // cout << cur << endl;
               r ++;
          }else{
               cur -= arr[l++];
          }
          // break;
     }
     cout << mx << endl;

     return 0;
}
