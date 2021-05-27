#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, x;
priority_queue<ll, vector<ll>, greater<ll> > q;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> n >> k;
     for (int i=0;i<n;i++){
          cin >> x;
          // cout << x << endl;
          q.push(x);
     }
     ll cnt = 0;
     while (q.size() > 1 && q.top() < k){
          cnt ++ ;
          ll a=q.top();q.pop();
          ll b=q.top();q.pop();
          ll c=a + 2*b;
          // cout << a << " " << b << " " << c << endl;
          q.push(c);
     }
     if (q.top() < k){
          cout << -1 << endl;
     }else cout << cnt << endl;




     return 0;
}
