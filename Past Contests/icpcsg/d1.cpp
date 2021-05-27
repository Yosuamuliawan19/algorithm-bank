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
vector<int> adj[10100];
bool visited[10100] = {0},  disc[10100] = {0}, low[10100] = {0}, parent[10100] = {0};
int tim = 0;
void tarjan(int u)
{

   visited[u] = true;
   disc[u] = low[u] = ++tim;
  for(int i=0;i<adj[u].size();i++)
   {
       int v = adj[u][i];
       if (!visited[v])
       {
          parent[v] = u;
          tarjan(v);
          low[u]  = min(low[u], low[v]);
          if (low[v] > disc[u])
            cout << u <<" " << v << endl;
       }
       else if (v != parent[u])
          low[u]  = min(low[u], disc[v]);
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
     for (int i = 0; i < n; i++)
     {
         parent[i] = -1;
         visited[i] = false;
     }
     for (int i=0;i<n;i++){
          if (!visited[i]) tarjan(i);
     }


	return 0;
}
