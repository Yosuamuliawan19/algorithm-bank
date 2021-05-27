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
ll tc,n,m,a,b,c,sx,ex;
vector<pair<ll,ll> > adj[10100];
ll dist[10100];
queue<pair<ll, ll > > pq;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n >> m;
          for (ll i=0;i<=n;i++){
               dist[i] = LLONG_MAX;
               adj[i].clear();
          }
          // cout << "hey\n";
          for (ll i=0;i<m;i++){
               cin >> a >> b >> c;
               adj[a-1].pb(mp(b-1, c));
          }
          cin >> sx >> ex;
          pq.push(mp(0, sx-1));
          dist[sx-1] = 0;
          while (!pq.empty()){
               pair<ll,ll> cur = pq.front(); pq.pop();
               ll u = cur.se, dis = cur.fi;
               // cout << u << " " << dis << endl;
               for (ll i=0;i<adj[u].size();i++){
                    ll v = adj[u][i].fi, w = adj[u][i].se;
                    if (dist[v] > dist[u] + w){
                         dist[v] = dist[u] + w;
                         pq.push(mp(dist[v], v));
                    }
               }
          }
          for (int i=0;i<n;i++){
               cout << dist[i] << " ";
          }
          cout << endl;
          if (dist[ex-1] != LLONG_MAX){
               cout << dist[ex-1] << endl;
          }else{
               cout << "NO\n";
          }
     }

	return 0;
}
