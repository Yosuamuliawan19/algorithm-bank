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
#include<climits>
#include<set>
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

int tc, n, m, k, s;
int a, b;
vector<int> adjList[50100];
bool vis[50100];
int cnt[50100];
set<int> st;
int ans = 0;
map<int,bool> mm;
void dfs(int x, int dep){
     if (dep == 0) return;
     cout << x <<" " << dep << endl;
     st.insert(x);
     for (int i=0;i<adjList[x].size();i++){
          int cur = adjList[x][i];
          if (!vis[cur]){
               vis[cur] = 1;
               if (mm.find(cur) != mm.end()){
                    dfs(cur, m);
               }else{
                    dfs(cur, dep-1);
               }
          }
     }
}
int main(int argc, char const *argv[])
{
     scanf("%d",&tc);
     while (tc--){
          st.clear();
          mm.clear();
          scanf("%d %d %d",&n , &m, &k);
          for (int i=0;i<50100;i++){
                adjList[i].clear();
                vis[i] = 0;
          }
          for  (int i=0;i<n-1;i++){
               scanf("%d %d",&a ,&b);
               adjList[a-1].pb(b-1);
               adjList[b-1].pb(a-1);
          }
          for (int i=0;i<m;i++){
               cin >> s;
               mm[s-1] = 1;
          }
          vis[s-1] =1;
          dfs(s-1, k);
          printf("%d\n", (int)st.size());
     }

	return 0;
}
