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
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
const int sz = 100010;

struct elem{
     int mx,mn;
}st[sz], lazy[sz];
int n, m, A[sz], q, l, r, v;
elem dummy;
elem combine(elem a, elem b){
     elem ret;
     ret.mn = min(a.mn,b.mn);
     ret.mx = max(a.mx,b.mx);
     return ret;
}
void build(ll node, ll start, ll end){
     if (start == end){
          elem now;
          now.mn = A[start-1];
          now.mx = A[start-1];
          st[node] = now;
          return;
     }
     ll mid = (start+end)/2;
     build(node*2, start, mid, l , r);
     build(node*2+1, mid+1, end, l , r);
     st[node] = combine(st[node*2], st[node*2+1]);
}

void update(ll node, ll start, ll end, ll l, ll r, ll val){
	// if (lazy[node].mn != INT_MAX){
	// 	st[node] += (end-start+1)*lazy[node];
	// 	if (start != end){
	// 		lazy[node*2+1] += lazy[node];
	// 		lazy[node*2] += lazy[node];
	// 	}
     //
     //
     //
	// 	lazy[node].mn = INT_MAX;
	// }
	if (start > r || end < l || start > end) return;
	if (start >= l && end <= r){
		st[node].mn += val;
          st[node].mx += val;
		// if (start != end){
		// 	lazy[node*2] += val;
		// 	lazy[node*2+1] += val;
		// }
		return ;
	}
	ll mid = (start+end)/2;
	update(node*2, start, mid, l, r, val);
	update(node*2+1, mid+1, end, l, r, val);
	st[node] = combine(st[node*2], st[node*2+1]);
}

elem query(ll node,ll start, ll end, ll l, ll r){

	if (start > r || end < l || start > end) return dummy ;
	// if (lazy[node] != 0){
	// 	st[node] += (end-start+1) *lazy[node];
	// 	if (start != end){
	// 		lazy[node*2+1] += lazy[node];
	// 		lazy[node*2] += lazy[node];
	// 	}
	// 	lazy[node] = 0;
	// }
	if (start >= l && end <= r) {
		return st[node];
	}
	ll mid = (start + end) /2;
	elem p1 = query(node*2, start, mid,l,r);
	elem p2 = query(node*2+1, mid+1, end,l,r);
	return combine(p1,p2);
}
int main(int argc, char const *argv[])
{
     dummy.mn = INT_MAX;
     dummy.mx = INT_MIN;
     scanf("%d", &n);
     for (int i=0;i<n;i++){
          scanf("%d", &A[i]);
     }
     scanf("%d", &m);
     build(1,1,n,1,n);
     for (int i=0;i<m;i++){
          scanf("%d", &q);
          if (q == 1){
               scanf("%d %d %d", &l,&r,&v);
               update(1,1,n,l,r,v);
          }else{
               scanf("%d %d", &l,&r);
               elem ans = query(1,1,n,l,r);
               cout << ans.mx - ans.mn << endl;
          }
     }


	return 0;
}
