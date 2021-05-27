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
          ll l = 1, r = 1000010;
          if (t == h-c){
               cout << 2 << "\n";
               continue;
          }
          if (t == h){
               cout << 1 << "\n";
               continue;
          }
          ll m;
          double closest = ab(t,h);
          ll closest_step = 1;
          while (l <= r){
               m = l + (r-l)/2;
               ll tmp = (h*m) + (c*(m-1));
               double cur = (double)tmp / (m+m-1);
               // cout << m << " " << cur << " " <<ab(cur,t) << endl;
               double cur_dis = ab(cur,t);
               if (cur_dis <= closest){
                    if (cur_dis == closest){
                         closest_step = mn(m+m-1, closest_step);
                    }else{
                         closest_step = m+m-1;
                    }
                    closest = cur_dis;
               }
               if (cur == t){
                    break;
               }
               if (cur > t){
                    l = m+1;
               }else{
                    r = m-1;
               }
          }

          ll p = (closest_step + 1)/2.0;
          for (ll m=mx(1, p-500);m < mn(p+500,1000010);m++){
               ll tmp = (h*m) + (c*(m-1));
               double cur = (double)tmp / (m+m-1);
               double cur_dis = ab(cur,t);
               // cout << m << " " << cur << " " <<ab(cur,t) << endl;
               if (cur_dis <= closest){
                    if (cur_dis == closest){
                         closest_step = mn(m+m-1, closest_step);
                    }else{
                         closest_step = m+m-1;
                    }
                    closest = cur_dis;
               }
          }
          // cout << closest << endl;
          cout << closest_step << "\n";
          // cout << "---\n";
     }
}
