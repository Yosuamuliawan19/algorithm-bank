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
int n, m, a, b, v, s, t, dis;
vector<pair<int,int> > adj[11000];
int main(int argc, char const *argv[])
{

	scanf("%d%d",&n,&m);
     for (int i=0;i<m;i++){
          scanf("%d%d%d",&a,&b,&v);
          adj[a].pb(mp(v,b));
     }
     scanf("%d%d",&s,&t);
     vector<int> dist(n, INT_MAX);
     // vector<int> num(n, 0);
     queue<pair<int,int> > q;
     q.push(mp(0,s));
     num[s] = 1;
     dist[s] = 0;
     while (!q.empty()){
          pair<int,int> cur = q.front(); q.pop();
          int top = cur.se, dis = cur.fi;
          if (dis > dist[top]) continue;
          for (int i=0;i<adj[top].size();i++){
               int v = adj[top][i].se, w = adj[top][i].fi;
               if (dist[v] > dist[top] + w){
                    dist[v] = dist[top] + w;
                    q.push(mp(dist[v], v));
                    num[v] = num[top];
               }
               else if (dist[v] == dist[top] + w){
                    num[v] += nrp];
               }
          }
     }

     cout << num[t] << endl;
	return 0;
}
