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
const ll sz =  50010000;
const ll sz2 = 10000010;
ll st[sz] = {0}, lazy[sz] = {0};
set<ll> sett;
void update(ll node, ll start, ll end, ll l , ll r, ll val){
     if (lazy[node] != 0){
          st[node] = lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
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
     st[node] = -1;
}
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
     if (start >= l && end <= r && st[node] != -1) {
          // cout << start << " " << end << " "<<st[node] << endl;
          sett.insert(st[node]);
          return;
     }
     ll mid = (start+end)/2;
     query(node*2, start, mid, l, r);
     query(node*2+1, mid+1, end, l, r);
}

ll tc, n, l, r;
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
          ll mx = -1;
          for (int i=0;i<n;i++){
               scanf("%lld%lld",&l,&r);
               update(1,1,sz2,l,r,i+1);
               mx = max(r, mx);
          }
          query(1,1,sz2,1,sz2);
          int ans = sett.size();
          if (sett.find(0) != sett.end()) ans --;
          cout << ans << endl;
     }


	return 0;
}
