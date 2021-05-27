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
// dinic
ll n,m,s,t,tmp,tmp2;
const int sz = 1100;
ll mat[1100][1100];
// ll level[1100], res[1100][1100] = {0};
// bool vis[1100];
// bool bfs(){
//      // reset vis and level
//      memset(vis, 0, sizeof(vis));
//      memset(level, 0, sizeof(level));
//      // queue with current node and level
//      queue<pair<int,int> > q;
//      q.push(mp(s,0));
//      vis[s] = 1;
//      while (!q.empty()){
//           pair<int,int> p = q.front(); q.pop();
//           ll cur = p.fi, lvl = p.se;
//           // cout << "cur - " << cur << endl;
//           for (int i=0;i<(n+m+2);i++){
//                if (res[cur][i] > 0 && !vis[i]){
//                     vis[i] = 1;
//                     level[i] = lvl + 1;
//                     q.push(mp(i, lvl+1));
//                }
//           }
//      }
//      return vis[t];
// }
// int dfs(int cur, int flow){
//      if (!flow) return 0;
//      if (cur == t) return flow;
//      for (int i=0;i<(n+m+2);i++){
//           // if level is greater and still got flow
//           if (level[cur] + 1 == level[i] && res[cur][i] > 0){
//                int ret = dfs(i, min((ll)flow, res[cur][i]));
//                if (ret > 0){
//                     res[i][cur] += ret;
//                     res[cur][i] -= ret;
//                     return ret;
//                }
//           }
//      }
//      return 0;
// }
// ll maxflow(){
//      ll mf = 0;
//      // copy residual graph from adj matrix
//      for (int i=0;i<1100;i++){
//           for (int j=0;j<1100;j++){
//                res[i][j] = mat[i][j];
//           }
//      }
//      // while still can reach sink
//      while (bfs()){
//           // send flow
//           while (int pf = dfs(s, INT_MAX)){
//                mf += pf;
//           }
//      }
//      return mf;
// }
vector<ll> parent;

ll res[sz][sz] = {0};
bool bfs(){
	bool vis[sz];
	memset(vis,0,sizeof(vis));

	queue<ll> q;
	q.push(s);
	vis[s] = 1;
	parent[s] = -1;

	while(!q.empty()){
		ll cur = q.front();q.pop();
		for (ll i=0;i<(n+m+2);i++){
			if(!vis[i] && res[cur][i] > 0){
				vis[i] = 1;
				q.push(i);
				parent[i] = cur;
			}
		}
	}
	return vis[t];
}
ll maxflow(){
	for (ll i=0;i<(n+m+2);i++) for(ll j=0;j<(n+m+2);j++) res[i][j] = mat[i][j];
	parent = vector<ll>(n+m+2,0);
	ll tot = 0;
	while (bfs()){
		ll pf = LLONG_MAX;
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			pf = min(res[j][i], pf);
		}
		// cout << pf << endl;
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			res[j][i] -= pf;
			res[i][j] += pf;
		}
		tot += pf;
	}
	return tot;
}
int main()
{
	while (cin >> n >> m){
          if (!n && !m) break;
          for (int i=0;i<sz;i++){
               for (int j=0;j<sz;j++){
                    mat[i][j] = 0;
               }
          }
          s = n+m;
          t = n+m+1;
          for (int i=0;i<n;i++){
               cin >> tmp;
               mat[i][t] = tmp;
               mat[t][i] = tmp;
          }
          for (int i=0;i<m;i++){
               cin >> tmp;
               for (int j=0;j<tmp;j++){
                    cin >> tmp2;
                    mat[i+n][tmp2-1] = 1;
                    mat[tmp2-1][i+n] = 1;
               }
               mat[s][i+n] = 1;
               mat[i+n][s] = 1;
          }
          maxflow();
          bool suc = 1;
          for (int i=0;i<n;i++){
               if (res[i][t] > 0) suc = 0;
          }
          if (suc){
               cout << "1\n";
               for (int i=0;i<n;i++){
                    int cnt = 0;
                    for (int j=0;j<m;j++){
                         if (res[i][j+n] == 2){
                              if (cnt != 0) cout << " ";
                              cout << j+1;
                              cnt ++;
                         }
                    }
                    cout << endl;
               }

          }else{
               cout << "0\n";
          }
     }
	return 0;
}
