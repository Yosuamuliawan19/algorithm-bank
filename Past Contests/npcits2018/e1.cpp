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
void build(ll node, ll start, ll end){
     if (start == end){
          elem now;
          now.mx = A[start-1];
          now.mn = A[start-1];
          st[node] = now;
          return;
     }
     ll mid = (start+end)/2;
     build(node*2, start, mid);
     build(node*2+1, mid+1, end);
     st[node] = combine(st[node*2], st[node*2+1]);
}
void update(ll node, ll start, ll end, ll l, ll r, ll val){
	if (start > r || end < l || start > end) return;
	if (start >= l && end <= r){
		st[node].mn += val;
          st[node].mx += val;
		return ;
	}
	ll mid = (start+end)/2;
	update(node*2, start, mid, l, r, val);
	update(node*2+1, mid+1, end, l, r, val);
	st[node] = combine(st[node*2], st[node*2+1]);
}
elem query(ll node,ll start, ll end, ll l, ll r){
	if (start > r || end < l || start > end) return dummy;
	if (start >= l && end <= r) {
		return st[node];
	}
	ll mid = (start + end) /2;
	elem p1 = query(node*2, start, mid,l,r);
	elem p2 = query(node*2+1, mid+1, end,l,r);
     if (p1.mx == LLONG_MIN) return p2;
     if (p2.mx == LLONG_MIN) return p1;
	return combine(p1,p2);
}

int main()
{
     dummy.mn = LLONG_MAX;
     dummy.mx = LLONG_MIN;
	cin >> n;
     for (ll i=0;i<n;i++){
          cin >> A[i];
     }
     cin >> m;
     build(1,1,n);
     for (ll i=0;i<m;i++){
          cin >> q;
          if (q == 1){
               cin >> l >> r >> v;
               update(1,1,n,l,r,v);
          }else{
               cin >> l >> r;
               elem ans = query(1,1,n,l,r);
               cout << abs(ans.mx-ans.mn) << endl;
          }
     }

	return 0;
}
