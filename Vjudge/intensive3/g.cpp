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
ll n, m, k, s, t;
vector<pair<ll,pair<ll,ll> > > adj[1100];
ll a, b, c, d, ans = 0;
int main()
{
     scanf("%lld%lld%lld%lld%lld",&n,&m,&k,&s,&t);
     s--;t--;
     for (int i=0;i<m;i++){
          scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
          adj[a-1].pb(mp(b-1, mp(c,d)));
     }
     queue<pair<ll, pair<ll,ll> > > q;
     q.push(mp(s, mp(0, k)));
     while (!q.empty()){
          pair<ll, pair<ll,ll> > top = q.front();q.pop();
          ll cur = top.fi , a = top.se.fi, b = top.se.se;
          if (a > b) continue;
          if (cur == t) {
               ans += (b-a+1);
               continue;
          }
          for (ll i=0;i<adj[cur].size();i++){
               ll nxt = adj[cur][i].fi, c = adj[cur][i].se.fi, d = adj[cur][i].se.se;
               c = max(c,a);
               d = min(d,b);
               q.push(mp(nxt,mp(c, d)));
          }
     }
     // for (int i=0;i<n;i++){
     //      cout << mn[i] << " ";
     // }cout<<endl;
     // for (int i=0;i<n;i++){
     //      cout << mx[i] << " ";
     // }cout<<endl;



     printf("%lld\n", ans);

	return 0;
}
