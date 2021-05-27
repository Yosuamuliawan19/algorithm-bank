#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mn(ll a, ll b){
     if (a > b) return b;
     return a;
}
ll mx(ll a, ll b){
     if (a < b) return b;
     return a;
}
double ab(double a, double b){
     if (a >= b) return a-b;
     return b-a;
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     double tc, h, c, t;
     cin >> tc;
     while (tc--){
          cin >> h >> c >> t;
          // if (t == h){
          //      cout << 1 << "\n";
          //      continue;
          // }
          if (t == h-c){
               cout << 2 << "\n";
               continue;
          }

          ll l = 1, r = 10000, m;
          while (l <= r){
               m = l + (r-l)/2;
               double cur = (h*m) + (c*(m-1));
               cur = cur / (m+m-1);
               if (cur == t){
                    break;
               }
               if (cur > t){
                    l = m+1;
               }else{
                    r = m-1;
               }
          }

          ll point = m;
          double c_step = 1;
          double c_val = ab(h, t);
          for (ll m = mx(1, point-1000); m< mn(1000010, point+1000); m++){
               double cur = (h*m) + (c*(m-1));
               cur = cur / (m+m-1);
               cur = ab(cur, t);
               if (cur < c_val){
                    c_val = cur;
                    c_step = m+m-1;
               }else if (cur == c_val){
                    c_step = mn(c_step, m+m-1);
               }
          }
          cout << c_step << "\n";

     }
}
