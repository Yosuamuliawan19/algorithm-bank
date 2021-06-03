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
int n, k, a, b;
bool found = 0;
vector<int> adj[1000010];
vector<bool> vis;
void dfs(int cur, int dest){
     if (cur == dest){
          found = 1;
          return;
     }
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               vis[nxt] = 1;
               dfs(nxt, dest);
               vis[nxt] = 0;
          }
     }
}

int main(int argc, char const *argv[])
{
     scanf("%d%d",&n,&k);
     for (int i=0;i<k;i++){
          scanf("%d%d",&a,&b);
          adj[a].pb(b);
          adj[b].pb(a);
     }
     vis = vector<bool> (n+1, 0);
     bool ans = 1;
     for (int i=1;i<=n/2;i++){
          found = 0;
          dfs(i, n-i+1);
          ans = ans && found;
          // cout << found << " " << i << " " << n-i << endl;
     }
     if (ans){
          cout << "Yes\n";
     }else{
          cout << "No\n";
     }
	return 0;
}
