#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
ll n, a, b;
ll far, fardis;
ll vis[10010];
vector<vector<int> > arr;

void bfs(ll node){
     memset(vis, 0, sizeof(vis));
     queue<pair<int,int> > q;
     pair<int,int> cur;
     q.push(mp(node, 0));
     while (!q.empty()){
          cur = q.front(); q.pop();
          vis[cur.fi] = 1;
          // cout << cur.fi << " " << cur.se << endl;
          for (int i=0;i<arr[cur.fi].size();i++){
               if (!vis[arr[cur.fi][i]]){
                    q.push(mp(arr[cur.fi][i], cur.se + 1));
               }
          }
     }
     far = cur.fi; fardis = cur.se;
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     arr  = vector<vector<int> > (n, vector<int>());
     for (int i=0;i<n-1;i++){
          cin >> a >> b;
          arr[a-1].pb(b-1);
          arr[b-1].pb(a-1);
     }
     bfs(a-1);
     bfs(far);
     cout <<fardis << "\n";
     return 0;
}
