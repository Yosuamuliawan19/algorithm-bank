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
vector<int> adj[100100];
vector<int> vis(100100, 0);
ll mx = 0;
void dfs(ll cur, ll dep){
     mx = max(dep, mx);
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt] && adj[nxt].size() < adj[cur].size()){
               vis[nxt] = 1;
               dfs(nxt, dep +1);
               vis[nxt] = 0;
          }
     }
}
int main()
{
     ll n, m, a, b;
     cin >> n >> m;
     for (int i=0;i<m;i++){
          cin >> a >> b;
          adj[a].pb(b);
          adj[b].pb(a);
     }
     vector<pair<int,int> > lst;
     for (int i=0;i<n;i++){
          lst.pb(mp(adj[i].size(), i ));
     }
     sort(lst.begin(), lst.end());

     for (int i=n-1;i>=0;i--){
          vis[lst[i].se] = 1;
          dfs(lst[i].se, 1);
          vis[lst[i].se] = 0;
          if (mx >= i) break;
     }

     cout << mx << endl;

	return 0;
}
