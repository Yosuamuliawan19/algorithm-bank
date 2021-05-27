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
ll n, s, t, c, a, b, x, tc = 1;
ll mat[110][110] = {0};
// dinic
ll level[110], res[110][110] = {0};
bool vis[110];
bool bfs(){
     // reset vis and level
     memset(vis, 0, sizeof(vis));
     memset(level, 0, sizeof(level));
     // queue with current node and level
     queue<pair<int,int> > q;
     q.push(mp(s,0));
     vis[s] = 1;
     while (!q.empty()){
          pair<int,int> p = q.front(); q.pop();
          ll cur = p.fi, lvl = p.se;
          for (int i=0;i<n;i++){
               if (res[cur][i] > 0 && !vis[i]){
                    vis[i] = 1;
                    level[i] = lvl + 1;
                    q.push(mp(i, lvl+1));
               }
          }
     }
     return vis[t];
}
int dfs(int cur, int flow){
     if (!flow) return 0;
     if (cur == t) return flow;
     for (int i=0;i<n;i++){
          // if level is greater and still got flow
          if (level[cur] + 1 == level[i] && res[cur][i] > 0){
               int ret = dfs(i, min((ll)flow, res[cur][i]));
               if (ret > 0){
                    res[i][cur] += ret;
                    res[cur][i] -= ret;
                    return ret;
               }
          }
     }
     return 0;
}
ll maxflow(){
     ll mf = 0;
     // copy residual graph from adj matrix
     for (int i=0;i<110;i++){
          for (int j=0;j<110;j++){
               res[i][j] = mat[i][j];
          }
     }
     // while still can reach sink
     while (bfs()){
          // send flow
          while (int pf = dfs(s, INT_MAX)){
               mf += pf;
          }
     }
     return mf;
}
int main()
{
	while (cin >> n){
          if (n == 0) break;
          memset(mat, 0, sizeof(mat));
          cin >> s >> t >> c;
          for (ll i=0;i<c;i++){
               cin >> a >> b >> x;
               mat[a-1][b-1] += x;
               mat[b-1][a-1] += x;
          }
          s--; t--;
          ll mf = maxflow();
          cout << "Network " << tc++ << endl;
		cout << "The bandwidth is " <<  mf <<".\n\n";
     }
	return 0;
}
