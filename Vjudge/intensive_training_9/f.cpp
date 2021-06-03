// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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
int n, a, b, c;
int par[100100], val[100100], rnk[100100];
vector<int> adj[100100];
bool vis[100100];
void dfs(int cur){
     cout << cur+1<< endl;
     vis[cur] = 1;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               dfs(nxt);
          }
     }
}
int main()
{
	cin >> n;
     int root = 0;
     for (int i=0;i<n;i++){
          cin >> par[i] >> val[i] >> rnk[i]; par[i]--;
          vis[i] = 0;
          adj[par[i]].pb(i);
          if (par[i] == -2) root = i;
     }
     dfs(root);

	return 0;
}
