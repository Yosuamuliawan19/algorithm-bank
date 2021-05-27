#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, arr[300010], ans[300010], n;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     map<ll, vector<ll> > mp;
     cin >> tc;
     while (tc--){
          cin >> n;
          set<ll> st;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               st.insert(arr[i]);
               if (mp.find(arr[i]) == mp.end()){
                    vector<ll> v;
                    v.pb(i);
                    mp[arr[i]] = v;
               }else{
                    mp[arr[i]].pb(i);
               }

          }
          memset(ans, 0, sizeof(ans));
          for (auto s: st){
               // cout << s << endl;
               ll k = 0;
               vector<ll> v = mp[s];
               for (ll i=0;i<v.size();i++){
                    ll cur;
                    if (i == 0){
                         cur = 1 + v[i];
                    }

                    if (cur > k){
                         k = cur;
                    }

                    if (i == v.size() -1){
                         cur = n-v[i];
                         // cout << cur << endl;
                    }

                    if (cur > k){
                         k = cur;
                    }

                   if (i >= 1) cur = v[i] - v[i-1];

                   if (cur > k){
                        k = cur;
                   }
               }
               // cout << k << " - "<< s <<  endl;

               k--;
               if (ans[k] != 0){
                    if (ans[k] > s){
                         ans[k] = s;
                    }
               }else{
                    ans[k] = s;
               }
          }


          ll mn = LLONG_MAX;
          for (int i=0;i<n;i++){

               if (ans[i] < mn && ans[i] != 0){
                    mn = ans[i];
               }

               if (ans[i] == 0 && mn == LLONG_MAX) cout << -1;
               else cout << mn;



               if (i!=n-1) cout << " ";
          }
          cout << endl;
          mp.clear();
     }
}
