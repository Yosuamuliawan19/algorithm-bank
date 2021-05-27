#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, arr[110];
vector<ll> res;
map<ll, ll> amt;
ll iter = 0;
ll bs(ll tofind){
     ll l=0, r=res.size()-1;
     while (r >= l){
          ll m = l + (r-l)/2;
          if (res[m] == tofind){
               return 1;
          }else if (res[m] > tofind){
               r = m-1;
          }else {
               l = m+1;
          }
     }
     return 0;
}
int main(){

     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }

     for (int a=0;a<n;a++){
          for (int b=0;b<n;b++){
               for (int c=0;c<n;c++){
                    // cout << arr[a]*arr[b]+arr[c] <<  endl;
                    res.push_back(arr[a]*arr[b]+arr[c]);
                    if (amt.count(arr[a]*arr[b]+arr[c]) > 0){
                         amt[arr[a]*arr[b]+arr[c]] = amt[arr[a]*arr[b]+arr[c]] + 1;
                    }else{
                         amt[arr[a]*arr[b]+arr[c]] = 1;
                    }
               }
          }
     }
     // cout << endl;
     sort(res.begin(), res.end());
     ll ans = 0;
     for (int a=0;a<n;a++){
          for (int b=0;b<n;b++){
               for (int c=0;c<n;c++){
                    if (arr[a] == 0) continue;
                    // cout << arr[a]*(arr[b]+arr[c]) << endl;
                    if (bs(arr[a]*(arr[b]+arr[c]))){
                         ans += amt[arr[a]*(arr[b]+arr[c])];
                    }
               }
          }
     }
     cout << ans << endl;

     return 0;
}
