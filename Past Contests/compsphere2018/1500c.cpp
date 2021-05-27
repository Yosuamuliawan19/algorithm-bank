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
const int sz = 10*100000;
ll st[sz], lazy[sz];
void update(ll node, ll start, ll end, ll l, ll r, ll val){
     if (start > end) return;
     if (lazy[node] != 0){
          st[node] += lazy[node]*(end-start+1);
          if (start != end){
               lazy[node*2+1] += lazy[node];
               lazy[node*2] += lazy[node];
          }
          lazy[node] = 0;
     }
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r){
          st[node] += val*(end-start+1);
          if (start != end){
               lazy[node*2] += val;
               lazy[node*2+1] += val;
          }
          return;
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
     st[node] = st[node*2] + st[node*2+1];
}
ll query(ll node, ll start, ll end, ll l, ll r){
     if (start > end || start > r || end < l) return 0;
     if (lazy[node] != 0){
          st[node] += lazy[node]*(end-start+1);
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
     return p1+p2;
}

ll tc, n, m, q, l, r, v;
int main()
{
     cin >> tc;
     while (tc--){
          memset(st,0,sizeof(st));
          memset(lazy,0,sizeof(lazy));
          cin >> n >> m;
          for (int i=0;i<m;i++){
               cin >> q;
               if (q == 0){
                    cin >> l >> r >> v;
                    update(1,1,n,l,r,v);
               }else{
                    cin >> l >> r;
                    ll ans = query(1,1,n,l,r);
                    cout << ans << endl;
               }
          }
     }
	return 0;
}
