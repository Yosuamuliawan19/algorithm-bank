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

          ll mx = LLONG_MAX;

          ll sum = 0;
          ll carry = 0;

          for (auto i=mp2.rbegin(); i!=mp2.rend(); i++){
               ll cur = i->first, amt = i->second;
               cout << cur << " " << amt << endl;
               if (cur > mx){
                    cout << "skipped\n";
                    carry += amt;
                    continue;
               }
               mx = cur - amt;
          }
          cout << "--\n";
     }

     return 0;
}
