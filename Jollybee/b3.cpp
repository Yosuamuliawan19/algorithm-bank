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
const ll sz = 10100000;
ll st[4*sz] = {0}, lazy[4*sz] = {0};
set<ll> sett;
void update(ll node, ll start, ll end, ll l, ll r, ll val){
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r && st[node] != -1){
          if (st[node] == 0){
               st[node] = val;
          }else{
               if (start != end){
                    st[node*2] = st[node];
                    st[node*2+1] = st[node];
               }
               st[node] = val;
          }
          return;
     }
     ll mid = (start+end)/2;
     update(node*2,start,mid,l,r,val);
     update(node*2+1,mid+1,end,l,r,val);
     st[node] = -1;
}
void query(ll node, ll start, ll end, ll l, ll r){
     if (start > end || start > r || end < l) return;
     if (start >= l && end <= r && st[node] != -1) {
          cout << start << " " << end << " " << st[node] << endl;
          sett.insert(st[node]);
          return;
     }
     ll mid = (start+end)/2;
     query(node*2, start, mid, l, r);
     query(node*2+1, mid+1, end, l, r);
}

ll tc, n, a, b;
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
          for (int i=0;i<n;i++){
               scanf("%lld%lld",&a,&b);
               update(1,1,sz,a,b,i+1);
               // cout << "-----\n";
          }
          query(1,1,sz,1,sz);
          ll ans = sett.size();
          if (sett.find(0) != sett.end()) ans --;
          cout << ans << endl;

     }

	return 0;
}
