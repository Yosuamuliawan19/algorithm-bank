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
const int sz = 50000000;
int st[sz] = {0}, lazy[sz] = {0};
void update(ll node, ll start, ll end, ll l , ll r, ll val){
     if (lazy[node] != 0){
          st[node] = lazy[node];
		if (start != end){
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node] = 0;
          // cout << start << "-" << end <<  " " << st[node] << endl;

	}
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r){
          st[node] = val;
          if (start != end){
               lazy[node*2] = val;
               lazy[node*2+1] = val;
          }
          // cout << start << "--" << end << " " << st[node] <<endl;

          return ;
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
     st[node] = -1;
     // if (st[node] == -1) cout << start << "---" << end << " -1" <<  endl;
}
set<int> ans;
void query(ll node, ll start, ll end, ll l, ll r){
     if (start > end || start > r || end < l){
          return;
     }
     if (start >= l && end <= r && st[node] != -1) {
          ans.insert(st[node]);
          return;
     }
     ll mid = (start+end)/2;
     query(node*2, start, mid, l, r);
     query(node*2+1, mid+1, end, l, r);
}
int tc, n;
int main()
{
     int sz2 = 10000000;
     int l, r;
     scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          int mx = -1;
          for (int i=1;i<=4*n;i++){
               st[i] = 0;
               lazy[i] = 0;
          }
          ans.clear();
          for (int i=1;i<=n;i++){
               scanf("%d%d",&l,&r);
               mx = max(mx, r);
               update(1,1,sz2,l,r,i);
          }
          query(1,1,sz2,1,sz2);
          int an = ans.size();
          if (ans.find(0) != ans.end()) an--;
          cout << an << endl;
     }


	return 0;
}
