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
vector<int> parent;
vector<pair<int,pair<int,int> > > edges;
vector<vector<pair<int,int> >  > mst;
vector<bool> vis;
int n,m,q,a,b,x;

int findParent(int x){
     // cout <<"    "<< x << endl;
     return (parent[x] == x ? x : parent[x] = findParent(parent[x]));
}
void unify(int a, int b){
     a = findParent(a);
     b = findParent(b);
     if (a > b){
          parent[b] = a;
     }else{
          parent[a] = b;
     }
}
bool sameSet(int a, int b){
     return findParent(a) == findParent(b);
}
bool nyampe = 0;
int dfs(int cur, int dest, int mx){
     if (cur == dest) {
          nyampe = 1;
          return mx;
     }
     int ret = INT_MAX;
     for (int i=0;i<mst[cur].size();i++){
          int nxt = mst[cur][i].se;
          if (!vis[nxt]){
               vis[nxt] = 1;
               ret = min(ret, dfs(nxt, dest, max(mx, mst[cur][i].fi)));
               vis[nxt] = 1;
          }
     }
     return ret;
}
int main(int argc, char const *argv[])
{
     int tc = 1;
     while (cin >> n >> m >> q){
          if (!n && !m && !q) break;
          parent = vector<int>(n+1, 0);
          edges.clear();
          mst = vector<vector<pair<int,int> > >(n+1, vector<pair<int,int> >());
          vis.clear();
          for (int i=1;i<=n;i++) parent[i] = i;
          for (int i=0;i<m;i++){
               cin >> a >> b >> x;
               // cout << a << " " << b << " " << x << endl;
               edges.pb(mp(x,mp(a,b)));
          }
          sort(edges.begin(),edges.end());
          // cout << "find\n";
          for (int i=0;i<edges.size();i++){
               int a = edges[i].se.fi, b = edges[i].se.se;
               if (!sameSet(a,b)){
                    // cout << a << " "<< b << endl;
                    unify(a,b);
                    mst[a].pb(mp(edges[i].fi, b));
                    mst[b].pb(mp(edges[i].fi, a));
               }
          }
          if (tc != 1) cout << endl;
          cout << "Case #" << tc ++ << endl;
          for (int i=0;i<q;i++){
               cin >> a >> b;
               vis = vector<bool>(n+1,0);
               vis[a] = 1;
               nyampe = 0;
               int val = dfs(a,b, INT_MIN) ;
               if (!nyampe) cout << "no path\n";
               else cout << val << endl;
          }
     }

	return 0;
}
