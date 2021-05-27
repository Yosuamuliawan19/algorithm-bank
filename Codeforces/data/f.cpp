#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll x, n;
     priority_queue<ll, vector<ll>, greater<ll> > pq;
     while (cin >> n){
          if (!n) break;
          pq = priority_queue <ll, vector<ll>, greater<ll> >();

          for (int i=0;i<n;i++) {
               cin >> x; pq.push(x);
          }
          ll ans = 0;
          while (pq.size() != 1){
               ll a = pq.top(); pq.pop();
               ll b = pq.top(); pq.pop();
               ll c = a+b;
               ans += c;
               // cout << a << " " << b << endl;
               pq.push(c);
          }
          cout << ans << "\n";
     }
}
