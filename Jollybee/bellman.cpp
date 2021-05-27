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
vector<pair<pair<int,int>,int> >   edges;
ll dist[10100];
queue<pair<ll, ll > > pq;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n >> m;
          for (ll i=0;i<=n;i++){
               dist[i] = LLONG_MAX;
          }
          edges.clear();
          // cout << "hey\n";
          for (ll i=0;i<m;i++){
               cin >> a >> b >> c;
               edges.pb(mp(mp(a-1,b-1), c));
          }
          cin >> sx >> ex;
          dist[sx-1] = 0;
          for (ll i=0;i<n-1;i++){
               for (ll j=0;j<m;j++){
                    ll u = edges[j].fi.fi, v = edges[j].fi.se;
                    ll w = edges[j].se;
                    if (dist[v] > dist[u] + w){
                         dist[v] = dist[u] + w;
                    }
               }
          }
          for (ll j=0;j<m;j++){
               ll u = edges[j].fi.fi, v = edges[j].fi.se;
               ll w = edges[j].se;
               if (dist[v] > dist[u] + w){
                    // printf("This graph contains negative edge cycle\n");
               }
          }

          if (dist[ex-1] != LLONG_MAX){
               cout << dist[ex-1] << endl;
          }else{
               cout << "NO\n";
          }
     }

	return 0;
}
