#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ll n, arr[5010], a;
     while (cin >> n){
          if (!n) break;
          priority_queue<ll, vector<ll>, greater<ll> > pq;
          for (int i=0;i<n;i++){
               cin >> a;
               pq.push(a);
          }
          ll cost = 0;
          ll sum = 0;
          while (pq.size() != 1){

               ll a = pq.top(); pq.pop();
               ll b = pq.top(); pq.pop();
               pq.push(a+b);
               cost += a+b;
          }
          cout << cost << endl;
     }


     return 0;
}
