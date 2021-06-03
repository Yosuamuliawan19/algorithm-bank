#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, cur;
ll getsum(ll a , ll b){
     return (b*(b+1)/2) - (a*(a+1)/2);
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n;
          map<ll,ll> mp;
          for (ll i=0;i<n;i++){
               cin >> cur;
               mp[cur] = mp[cur] + 1;
          }
          map<ll,ll> mp2;
          for (auto &i: mp){
               mp2[i.second] = mp2[i.second] + 1;
          }

          ll mx = LLONG_MAX, sum = 0, carry = 0;

          // for (auto i=mp2.rbegin(); i!=mp2.rend(); i++){
          //      ll cur = i->first, amt = i->second;
          //      cout << cur << " " << amt << endl;
          //      if (cur >= mx) {
          //           ll diff = (cur - mx);
          //           sum += getsum(mx,cur);
          //           continue;
          //      }
          //      mx = (cur - amt + 1);
          //      sum += getsum(cur-amt, cur);
          //      if (mx == 0) break;
          // }

          for (auto i=mp2.rbegin(); i!=mp2.rend(); i++){
               ll cur = i->first, amt = i->second;
               // cout << cur << " " << amt << endl;
               if (cur > mx){
                    ll start = mx-amt; if (start < 0) start = 0;
                    sum += getsum(start, mx);
                    mx -= amt;
                    if (mx <= 0) break;
                    continue;
               }else{
                    mx = cur - amt;
                    ll start = cur - amt; if (start < 0) start = 0;
                    sum += getsum(start, cur);
                    if (mx <= 0) break;
               }

          }
          cout << sum << endl;
          // cout << "--\n";
     }

     return 0;
}
