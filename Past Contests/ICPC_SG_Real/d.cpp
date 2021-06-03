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
bool vis[10100] = {0}, disc[10100] = {0}, low[10100] = {0}, parent[10100] = {0};
int t = 0;
vector<int> adj[10100];
void tarjan(int cur){
     cout << cur << endl;
     vis[cur] = 1;
     disc[cur] = low[cur] = ++t;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               parent[nxt] = cur;
               tarjan(nxt);
               low[cur] = min(low[cur], low[nxt]);
               if (low[nxt] > disc[cur]){
                    cout << cur << " " << nxt << endl;
               }
          }else if (nxt != parent[cur]){
               low[cur] = min(low[cur], disc[nxt]);
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
          if (!vis[i]){
               tarjan(i);
          }
     }
	return 0;
}
