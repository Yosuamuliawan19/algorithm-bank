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
ll mat[110][110], res[110][110], parent[110];
bool bfs(int s, int t){
     bool vis[110];
     for (int i=0;i<110;i++) vis[i] = 0;
     queue<int> q;
     q.push(s);
     parent[s] = -1;
     vis[s] = 1;
     while (!q.empty()){
          int cur = q.front();q.pop();
          for (int i=0;i<n;i++){
               if (res[cur][i] > 0 && !vis[i]){
                    q.push(i);
                    parent[i] = cur;
                    vis[i] = 1;
               }
          }
     }
     return vis[t];
}
ll maxflow(ll s, ll t){
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               res[i][j] = mat[i][j];
          }
     }
     for (int i=0;i<n;i++) parent[i] = 0;
     ll mf = 0;
     while (bfs(s, t)){
          ll pf = LLONG_MAX;
          for (int i=t;i!=s;i=parent[i]){
               ll j = parent[i];
               pf = min(pf, res[j][i]);
          }
          cout << pf << endl;
          for (int i=t;i!=s;i=parent[i]){
               ll j = parent[i];
               res[j][i] -= pf;
               res[i][j] += pf;
          }
          mf += pf;
     }
     return mf;
}
int main()
{
	while (cin >> n){
          if (n == 0) break;
          cin >> s >> t >> c;
          for (int i=0;i<c;i++){
               cin >> a >> b >> x;
               mat[a-1][b-1] = x;
               mat[b-1][a-1] = x;
          }
          s--; t--;
          ll mf = maxflow(s, t);
          cout << "Network " << tc++ << endl;
          cout << "The bandwidth is " << mf << ".\n";
     }
	return 0;
}
