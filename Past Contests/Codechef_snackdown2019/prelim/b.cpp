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
bool vis[110] = {0};
int fren[110] = {0};
vector<int> adj[110];
int n, m, x, y;
bool dfs(int now, int dep){
     cout << now << "-" << dep << " " << adj[now].size()<< endl;
     if (adj[now].size() == 1){
          if (fren[dep] == 0) fren[dep] = 1;
     }else{
          if (fren[dep] == 1 || fren[dep] == 0){
               fren[dep] = 
          }
     }


     bool ret = true;
     for (int i=0;i<adj[now].size();i++){
          int nxt = adj[now][i];
          ret = ret || dfs(nxt, dep + 1);
     }
     return ret;
}
int bfs(int start){
     int dis[110];
     memset(dis, -1 ,sizeof(dis));
     queue<int> q;
     q.push(start);
     dis[start] = 0;
     while (!q.empty()){
          int cur = q.front();
          q.pop();
          for (int i=0;i<adj[cur].size();i++){
               int nxt = adj[cur][i];
               if (dis[nxt] == -1){
                    q.push(nxt);
                    dis[nxt] = dis[cur] + 1;
               }
          }
     }
     int mx=0, mxidx=0;
     for (int i=0;i<n;i++){
          if (dis[i]>mx){
               mx=dis[i];
               mxidx=i;
          }
     }
     return mxidx;
}
int main()
{
     cin >> n >> m;
     for (int i=0;i<m;i++){
          cin >> x >> y;
          adj[x-1].pb(y-1);
          adj[y-1].pb(x-1);
     }
     int start = bfs(0);
     cout << "start " << start << endl;
     bool suc = dfs(start, 0);
     cout << suc << " suc " << endl;
     for (int i=0;i<n;i++){
          cout <<  fren[i] << " ";
     }
     cout << endl;
	return 0;
}
