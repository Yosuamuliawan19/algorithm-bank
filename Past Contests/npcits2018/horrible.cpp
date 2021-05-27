#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll st[500000], lazy[500000];
ll tc, n, c, l, r, x;
void update(ll node, ll start, ll end, ll l, ll r, ll val){

	// check kalo ada update pending
	if (lazy[node] != 0){
//		cout << "found " << lazy[node] << " at " << start << " " << end << endl;
		st[node] += (end-start+1)*lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
		// check if out of range
	if (start > r || end < l || start > end) return;
//		cout << start << " " << end << " " << l << " " << r << endl;

	// if within range, set values and the return
	if (start >= l && end <= r){
		st[node] += (end-start+1)*val;
		if (start != end){
			lazy[node*2] += val;
			lazy[node*2+1] += val;
		}
		return ;
	}
	// if nothing
	ll mid = (start+end)/2;
	update(node*2, start, mid, l, r, val);
	update(node*2+1, mid+1, end, l, r, val);
	st[node] = st[node*2] + st[node*2+1];
}
ll query(ll node,ll start, ll end, ll l, ll r){
	if (start > r || end < l || start > end) return 0;

	if (lazy[node] != 0){
		st[node] += (end-start+1) *lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
	}
	if (start >= l && end <= r) {
//		cout << start << " " << end << " " << l << " " << r << " " << st[node] <<  endl;
		return st[node];
	}
	ll mid = (start + end) /2;
	ll p1 = query(node*2, start, mid,l,r);
	ll p2 = query(node*2+1, mid+1, end,l,r);
	return p1+p2;
}
int main (){

	cin >> tc;
	while (tc--){
		memset(st, 0, sizeof(st));
		memset(lazy, 0, sizeof(lazy));

		cin >> n >> c;
		for (ll i=0;i<c;i++){
			cin >> l;
			if (l == 0 ){
				cin >> l >> r >> x;
				update(1,1,n,l,r,x);
			}else{
				cin >> l >> r;
				cout << query(1,1,n,l,r) << endl;
			}
		}

//		for (int i=1;i<=n;i++){
//			cout << query(1,1,n,i,i) << endl;
//		}
	}




	return 0;
}
