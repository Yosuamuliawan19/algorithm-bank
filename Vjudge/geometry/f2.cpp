#include<iostream>
#include<vector>
typedef long double ll;

using namespace std;
ll n, q, w;
vector<pair<ll,ll> > points;
vector<ll> v;
bool oneLine(ll x, ll y, ll z){
     pair<ll,ll> a = points[x], b = points[y], c = points[z];
     if (a.first == b.first || a.first == c.first || b.first == c.first){
          if (a.first == b.first && b.first == c.first){
               return true;
          }else{
               return false;
          }
     }else{
          if ( (a.second-b.second)/(a.first-b.first) == (a.second-c.second)/(a.first-c.first)){
               return true;
          }else{
               return false;
          }
     }
}
bool test2(){
     ll s = v.size();
     if (s <= 2) return true;
     ll x = v[0], y = v[1];
     bool flag = true;
     for (ll i=2;i<s;i++){
          if (!oneLine(x,y,v[i])){
               flag = false;
               break;
          }
     }
     return flag;
}
bool test(ll x, ll y){
     v.clear();
     for (ll i=0;i<n;i++){
          if (i == x || i == y) continue;
          if (!oneLine(x,y,i)){
               // cout << i << " is not one line " << endl;
               v.push_back(i);
          }
     }
     return test2();
}
int main (){
     cin >> n;
     for (ll i=0;i<n;i++){
          cin >> q >> w;
          points.push_back(make_pair(q,w));
     }
     if (test(0,1)||test(0,2)||test(1,2)){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }
     return 0;
}
