#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<iomanip>
#include<string>
#include<climits>
#include<cmath>
#include<queue>
#include<string.h>

#define MP(a,b) make_pair(a,b)
#define FI first
#define SE second
#define PB(a,b) push_back(a,b);

typedef long long ll;
using namespace std;
ll n, q;
vector<ll> parent;
vector<ll> size;
ll findParent(ll a){
     return (parent[a] == a ? a : parent[a] = findParent(parent[a]));
}
inline bool sameSet(ll a, ll b){
     return findParent(a) == findParent(b);
}
ll mx;
ll idx = 0;
inline void unify(ll a, ll b){
     ll x = findParent(a), y = findParent(b);
     if (size[x] > size[y]){
          size[x] += size[y];
          size[y] = 0;
          parent[y] = x;
     }else if (size[x] < size[y]){
          size[y] += size[x];
          size[x] = 0;
          parent[x] = y;
     }else{
          if (x < y){
               size[x] += size[y];
               size[y] = 0;
               parent[y] = x;
          }else{
               size[y] += size[x];
               size[x] = 0;
               parent[x] = y;
          }
     }
     if (size[x] > mx){
          mx = size[x];
          idx = x;
     }
     if (size[y] > mx){
          mx = size[y];
          idx = y;
     }

     if (x == idx){
          idx = findParent(x);
     }
     if (y == idx){
          idx = findParent(y);
     }
}
void change(ll a){
     ll b = findParent(a);
     if (b == a ) return ;
     parent[b] = a;
     parent[a] = a;
     size[a] = size[b];
     size[b] = 0;

     if (size[a] > mx){
          mx = size[a];
          idx = a;
     }
     if (b == idx){
          idx = findParent(b);
     }
}

int main (){
     ll a, b;
     scanf("%lld %lld", &n,&q);
     for (ll i=0;i<n;i++){
          parent.push_back(i);
          size.push_back(1);
     }
     mx = 1;
     while (q--){
          scanf("%lld", &a);
          if (a == 1){
               scanf("%lld %lld", &a,&b);
               unify(a-1,b-1);
          }else if (a == 2){
               scanf("%lld", &a);
               change(a-1);
          }else{
               printf("%lld %lld\n", idx+1, mx);
          }
     }
}
