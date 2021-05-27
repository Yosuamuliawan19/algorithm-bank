#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, t, arr[100010];
bool ans[100010] = {0};
bool vis[100010] = {0};
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> n >> t;
          map<ll, vector<ll> > mp;
          for (ll i=0;i<n;i++){
               cin >> arr[i];
               if (mp.find(arr[i]) == mp.end()){
                    vector<ll> v;
                    v.pb(i);
                    mp[arr[i]] = v;
               }else{
                    mp[arr[i]].pb(i);
               }
          }
          memset(ans, 0, sizeof(ans));
          memset(vis, 0, sizeof(vis));
          for (ll i=0;i<n;i++){
               if (vis[i]) continue;
               ans[i] = 0;
               vis[i] = 1;
               if (mp.find(t-arr[i]) != mp.end()){
                    vector<ll> v = mp[t-arr[i]];
                    if (t-arr[i] != arr[i]){
                         for (ll j=0;j<v.size();j++){
                              if (v[j] == i) continue;
                              ans[v[j]] = 1;
                              vis[v[j]] = 1;
                         }
                    }else{
                         bool fl = 1;
                         for (ll j=0;j<v.size();j++){
                              if (v[j] == i) continue;
                              ans[v[j]] = fl;
                              vis[v[j]] = 1;
                              fl = !fl;
                         }
                    }

               }

          }
          for (ll i=0;i<n;i++){
               cout << ans[i];
               if (i!=n-1)cout << " ";
          }
          cout << "\n";
     }

     return 0;
}
