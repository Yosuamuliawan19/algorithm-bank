#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a, b;
int main (){
     map<pair<ll,ll> , ll> mp;
     while (cin >> n){
          if (!n) break;
          mp.clear();
          for (int i=0;i<n;i++){
               cin >> a >> b;
               pair<ll,ll> p = make_pair(a,b);
               mp[p] ++;
          }
          ll f = 1;
          for (auto it: mp){
               pair<ll,ll> p = make_pair(it.first.second,it.first.first);
               if (mp[p] != it.second){
                    f = 0; break;
               }
          }
          if (f) cout << "YES\n";
          else cout << "NO\n";
     }


     return 0;
}
