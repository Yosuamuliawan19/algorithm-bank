#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll n, k, a, ans = 0;
     priority_queue<ll, vector<ll>, greater<ll> > pq;
     cin >> n >> k;
     while (n--){
          cin >> a;
          pq.push(a);
     }
     while (!pq.empty()){
          if (pq.top() >= k) break;
          if (pq.size() == 1){
               if (pq.top() < k) ans = -1;
               break;
          }else{
               ans ++;
               ll a = pq.top();
               pq.pop();
               ll b = pq.top();
               pq.pop();
               pq.push(a + (b*2));
          }
     }
     cout << ans << endl;


}
