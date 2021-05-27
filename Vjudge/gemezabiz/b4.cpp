// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
const ll sz = 10000000;
ll st[4*sz] = {0}, lazy[4*sz] = {0};
void update(ll node, ll start, ll end, ll l , ll r, ll val){
     if (lazy[node] != 0){
          st[node] = lazy[node];
		if (start != end){
			lazy[node*2+1] = lazy[node];
			lazy[node*2] = lazy[node];
		}
		lazy[node] = 0;
	}
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r){
          st[node] = val;
          if (start != end){
               lazy[node*2] = val;
               lazy[node*2+1] = val;
          }
          return ;
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
     st[node] = val;
}
ll cur;
void query(ll node, ll start, ll end, ll l, ll r){
     if (start > end || start > r || end < l){
          return;
     }
     if (lazy[node] != 0){
          st[node] = lazy[node];
		if (start != end){
			lazy[node*2+1] = lazy[node];
			lazy[node*2] = lazy[node];
		}
		lazy[node] = 0;
	}
     if (start >= l && end <= r) {
          cur = st[node];
          return;
     }
     ll mid = (start+end)/2;
     query(node*2, start, mid, l, r);
     query(node*2+1, mid+1, end, l, r);
}
set<ll> sett;
ll tc, n, a, b;
vector< pair<ll,ll> > q;
map<ll,ll> maap;
vector<ll> v;
int main()
{

     scanf("%lld",&tc);
     while (tc--){
          scanf("%lld",&n);
          for (int i=0;i<=4*n;i++){
               st[i] = 0;
               lazy[i] = 0;
          }
          sett.clear();
          v.clear();
          q.clear();
          maap.clear();
          for (int i=0;i<n;i++){
               scanf("%lld%lld",&a,&b);
               v.pb(a);v.pb(b);
               q.pb(mp(a,b));
          }
          sort(v.begin(),v.end());
          int idx = 1;
          // idx
          for (int i=0;i<2*n;i++){
               if (v[i] == cur) i ++;
               cur = v[i];
               maap[cur] = idx++;
          }
          // translate
          for (int i=0;i<n;i++){
               a = q[i].fi; b = q[i].se;
               a = maap[a]; b = maap[b];
               update(1,1,idx,a,b,i+1);
          }
          // query satu satu
          for (int i=1;i<=idx;i++){
               query(1,1,idx,i,i);
               sett.insert(cur);
          }
          ll ans = sett.size();
          if (sett.find(0) != sett.end()) ans --;
          cout << ans << endl;

     }

	return 0;
}
