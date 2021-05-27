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
int n, m, k, s, t, lim, i;
bool vis[1100];
vector<pair<int,pair<int,int> > > adj[1100];
void dfs(int cur){
     for (i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i].fi;
          int a = adj[cur][i].se.fi, b = adj[cur][i].se.se;
          if (lim >= a && lim <= b){
               vis[nxt] = 1;
               dfs(nxt);
          }
     }
}
int a, b, c, d, arr[11000], idx = 0;
int main()
{
     cin >> n >> m >> k >>s >> t;
     s--;t--;
	for (int i=0;i<m;i++){
          cin >> a >> b >> c >> d;
          adj[a-1].pb(mp(b-1,mp(c,d)));
          arr[idx++] = (c-1);
          arr[idx++] = d;
     }
     sort(arr, arr+idx);
     int ans = 0;
     for (int i=1;i<idx;i++){
          if (arr[i] != arr[i-1]){
               for (int j=0;j<n;j++) vis[j] = 0;
               lim = arr[i];
               dfs(s);
               if (vis[t]){
                    ans += (arr[i] - arr[i-1]);
               }
          }
     }

     cout << ans << endl;
	return 0;
}
