// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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
const int sz = 100000*5;
ll st[sz];
ll n,m,q,l,r,v,A[sz], lazy[sz] = {0};
ll combine(ll a, ll b){
     return a + b;
}
void update(ll node, ll start, ll end, ll l , ll r, ll val){
	cout << node << " " << start << " " << end << " " << val << endl;
	if (start > end || start > r || end < l){
		cout << "out of bound\n";
		 return;
	}

     if (lazy[node] != 0){
          st[node] += lazy[node]*(start-end+1);
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
     if (start >= l && end <= r){
          st[node] += val*(start-end+1);
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
ll query(ll node, ll start, ll end, ll l, ll r){
	if (start > end || start > r || end < l){
          return 0;
     }
     if (lazy[node] != 0){
          st[node] += lazy[node]*(start-end+1);
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
     if (start >= l && end <= r) return st[node];
     ll mid = (start+end)/2;
     ll p1 = query(node*2, start, mid, l, r);
     ll p2 = query(node*2+1, mid+1, end, l, r);
     return combine(p1,p2);
}
// int main(){
//      dummy.mn = LLONG_MAX;
//      dummy.mx = LLONG_MIN;
//      for (int i=0;i<n;i++) scanf("%lld",&A[i]);
//      build(1,1,n);
//      update(1,1,n,l,r,v);
//      elem ans = query(1,1,n,l,r);
// 	return 0;
// }

int main()
{
	int tc;
	cin >> tc;
	while (tc--){
		cin >> n >> m;
		for (int i=0;i<m;i++){
			cin >> q;
			if (q == 0){
				cin >> l >> r >> v;
				cout << "update-----\n";
				update(1,1,n,l,r,v);
			}else{
				cin >> l >> r;
				cout << "query------\n";
				ll ans = query(1,1,n,l,r);
				cout << ans << endl;
			}
		}
	}

	return 0;
}
