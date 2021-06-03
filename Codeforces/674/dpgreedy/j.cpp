#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll n, arr[20];

ll ans = 0;
void dp (ll i, ll len, ll prev){
     // cout << i << " " << len << " " << prev << endl;
     ans = max(ans, len);
     for (int j=i+1;j<n;j++){
          if (arr[j] > prev){
               dp (j, len + 1, arr[j]);
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     for (int i=0;i<n;i++){
          dp (i, 1, arr[i]);
     }

     cout << ans << "\n";
     return 0;
}
