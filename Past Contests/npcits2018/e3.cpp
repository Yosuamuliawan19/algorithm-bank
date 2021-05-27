#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<ll> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
typedef long long ll;
using namespace std;
const ll sz = 100010;

struct elem{
     ll mx,mn;
}st[sz], lazy[sz];
ll tc, A[sz], n, m, q, l, r, v;
elem dummy;

elem combine(elem a, elem b){
     elem ret;
     ret.mn = min (min(a.mx,b.mx), min(a.mn,b.mn));
     ret.mx = max (max(a.mx,b.mx), max(a.mn,b.mn));
     return ret;
}
void build(){
     for (int i=n-1;i>0;i--){
          elem b = st[(i*2)], c = st[(i*2)+1];
          st[i] = combine(b, c);
          cout << st[i].mn << endl;
     }
}
elem query(int l, int r){
     elem suml, sumr;
     suml.mn = LLONG_MAX;
     suml.mx = LLONG_MIN;
     sumr.mn = LLONG_MAX;
     sumr.mx = LLONG_MIN;
     for (l+=n, r+=n; l < r; l>>=1, r>>=1){
          if (l&1){
               suml = combine(suml, st[l++]);
          }
          if (r&1){
               sumr = combine(st[--r], sumr);
          }
     }
     elem sum = combine(suml, sumr);
     return sum;
}
int main (){
     dummy.mn = LLONG_MAX;
     dummy.mx = LLONG_MIN;
	cin >> n;
     for (ll i=1;i<=n;i++){
          cin >> st[i].mn;
          st[i].mx = st[i].mn;
     }
     cin >> m;
     build();
     for (ll i=0;i<m;i++){
          cin >> q;
          if (q == 1){
               cin >> l >> r >> v;
          }else{
               cin >> l >> r;
               elem ans = query(l,r);
               cout << abs(ans.mx-ans.mn) << endl;
          }
     }


     return 0;
}
