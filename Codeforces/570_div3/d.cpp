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
          ll mx = LLONG_MAX;

          map<ll,ll> mp2;
          for (auto &i: mp){
               mp2[i.second] = mp2[i.second] + 1;
          }
          ll sum = 0;
          ll carry = 0;
          for (auto i=mp2.rbegin(); i!=mp2.rend();  i++){
               int cur = i->first, amt = i->second;
               // cout << cur << " " << amt << endl;
               if (cur > mx) {
                    if (cur - amt < mx && cur-amt >0 ){
                         // cout << "tambah " <<  getSum(cur-amt, mx) << endl;
                         sum += getsum(cur-amt, mx);
                         mx = cur - amt;
                    }else{
                         carry += amt;
                    }
                    carry += amt;
                    continue;
               }
               amt += carry; carry = 0;
               mx = cur-amt;
               if (mx < 0) mx = 0;
               sum += (cur*(cur+1)/2) - (mx*(mx+1)/2);
               if (mx == 0) break;
               // cout << "added " << (cur*(cur+1)/2) - (mx*(mx+1)/2) << ", now at " <<mx <<  endl;
               // cout << cur << " " << amt << " " << sum << endl;

          }
          if (mx != 0){
               if (mx > carry){
                    ll diff = mx -carry;
                    sum += (mx*(mx+1)/2) -(diff*(diff+1)/2);
               }else{
                    sum += (mx*(mx+1)/2);
               }
          }

          cout << sum << endl;
          // cout << "------\n";
     }

     return 0;
}
