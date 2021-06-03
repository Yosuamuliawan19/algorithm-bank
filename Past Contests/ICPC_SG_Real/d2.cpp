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

int n, m, a, b;
bool vis[10100];
int disc[10100], low[10100], parent[10100];
int t = 1;
vector<int> adj[10100];
int x, y;
map<pair<int,int> , bool> mapp;
int arr[10100][10100] = {0};
void tarjan(int cur){
     vis[cur] = 1;
     disc[cur] = t;
     low[cur]  = t;
     t++;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               parent[nxt] = cur;
               tarjan(nxt);
               low[cur] = min(low[cur], low[nxt]);
               if (low[nxt] > disc[cur]){
                    arr[nxt][cur] = 1;
                    arr[cur][nxt] = 1;
               }
          }else if (parent[cur] != nxt){
               low[cur] = min(low[cur], disc[nxt]);
          }
     }
}
void dfs(int cur){
     // cout << cur << endl;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (arr[nxt][cur] || arr[cur][nxt]) {
               // cout << nxt << " "<< cur << " is bridge\n";
               continue;
          }
          if (!vis[nxt]){
               vis[nxt] = 1;
               dfs(nxt);
          }
     }
}
int main(int argc, char const *argv[])
{
	scanf("%d%d",&n,&m);
     for (int i=0;i<m;i++){
          scanf("%d%d",&a,&b);
          adj[a].pb(b);
          adj[b].pb(a);
     }
     for (int i=0;i<n;i++){
          parent[i] = -1;
          vis[i] = 0;
     }
     for (int i=0;i<n;i++){
          if (vis[i] == 0) tarjan(i);
     }
     for (int i=0;i<n;i++) vis[i] = 0;
     vis[0] = 1;
     dfs(0);
     int ans = 0;
     for (int i=0;i<n;i++){
          if (vis[i]) ans ++;
     }
     cout << ans << endl;


	return 0;
}
