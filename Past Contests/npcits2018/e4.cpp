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
const int sz = 1000000;
struct elem{
     ll mn, mx;
}st[sz];
ll n,m,q,l,r,v,A[sz], lazy[sz] = {0};
elem combine(elem a, elem b){
     elem ret;
     ret.mn =  min(a.mn,b.mn);
     ret.mx = max(a.mx,b.mx);
     return ret;
}
void build(ll node, ll start, ll end){
     if (start == end){
          st[node].mx = A[start-1];
          st[node].mn = A[start-1];
     }else{
          ll mid = (start+end)/2;
          build(node*2, start, mid);
          build(node*2+1, mid+1, end);
          st[node] = combine(st[node*2], st[node*2+1]);
     }
}
void update(ll node, ll start, ll end, ll l , ll r, ll val){
     if (lazy[node] != 0){
          st[node].mx += lazy[node];
          st[node].mn += lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r){
          st[node].mx += val;
          st[node].mn += val;
          if (start != end){
               lazy[node*2] += val;
               lazy[node*2+1] += val;
          }
          return ;
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
     st[node] = combine(st[node*2], st[node*2+1]);
}
elem dummy;
elem query(ll node, ll start, ll end, ll l, ll r){
     if (start > end || start > r || end < l){
          dummy.mn = LLONG_MAX;
          dummy.mx = LLONG_MIN;
          return dummy;
     }
     if (lazy[node] != 0){
          st[node].mx += lazy[node];
          st[node].mn += lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
     if (start >= l && end <= r) return st[node];
     ll mid = (start+end)/2;
     elem p1 = query(node*2, start, mid, l, r);
     elem p2 = query(node*2+1, mid+1, end, l, r);
     return combine(p1,p2);
}
int main(){
     dummy.mn = LLONG_MAX;
     dummy.mx = LLONG_MIN;
     for (int i=0;i<n;i++) scanf("%lld",&A[i]);
     build(1,1,n);
     update(1,1,n,l,r,v);
     elem ans = query(1,1,n,l,r);
	return 0;
}
