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
vector<int> adj[101000];
vector<bool> vis(101000, 0);
int cnt = 0;
void dfs(int cur){
     // cout << "visit " << cur << endl;
     cnt ++;
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]){
               vis[nxt] = 1;
               dfs(nxt);
               vis[nxt] = 0;
          }
     }
}
int idx = 0;
int main(int argc, char const *argv[])
{
	int n, mx = 0, a, b;
     scanf("%d",&n);
     for (int i=0;i<n;i++){
          scanf("%d %d" ,&a,&b);
          adj[a].pb(b);
          adj[b].pb(a);
          mx = max(max(a,b), mx);
     }

     int mxdc = 0, mxleft = 0;
     for (int i=0;i<=mx;i++){
          // cout << "close " << i << endl;
          int cur = 0, left = 0, sum = 0;
          int max1 = -1, max2 = -1;
          vis[i] = 1;
          for (int j=0;j<adj[i].size();j++){
               if (j == adj[i].size()-1){
                    cnt = mx - sum;
               }else{
                    vis[adj[i][j]] = 1;
                    dfs(adj[i][j]);
                    vis[adj[i][j]] = 0;
               }
               idx++;
               cur += cnt * sum;
               sum += cnt;
               if (max1 < cnt){
                    max2 = max1;
                    max1 = cnt;
               }else if (max2 < cnt){
                    max2 = cnt;
               }
               cnt = 0;
          }
          vis[i] = 0;
          if (idx >= 2) left = max1 * max2;
          idx = 0;
          if (cur > mxdc){
               mxdc = cur;
               mxleft = left;
          }
          // cout << cur << " " << cur-left <<endl;
     }
     cout << mxdc << " "<< mxdc - mxleft << endl;

	return 0;
}
