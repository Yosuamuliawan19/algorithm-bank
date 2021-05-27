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
#include<set>
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

int n, a, b;
vector<int> adjList[320];
int vis[320];
bool ok = 1;
void dfs(int x){
     for (int i=0;i<adjList[x].size();i++){
          int cur = adjList[x][i];
          if (vis[cur] == -1){
               vis[cur] = 3 - vis[x];
               dfs(cur);
          }else if(vis[cur] == vis[x]){
               ok = 0;
          }
     }
}
int main(int argc, char const *argv[])
{
     while (cin >> n){
          if (!n) break;
          for (int i=0;i<n;i++) adjList[i].clear();
          for (int i=0;i<n;i++) vis[i] = -1;
          while(cin >> a >> b){
               if (!a&&!b) break;
               adjList[a-1].pb(b-1);
               adjList[b-1].pb(a-1);
          }
          ok = 1;
          for (int i=0;i<n;i++){
               if(vis[i] == -1){
                    vis[i] = 1;
                    dfs(i);
               }
          }
          if (ok) cout << "YES\n";
          else cout << "NO\n";
     }


	return 0;
}
