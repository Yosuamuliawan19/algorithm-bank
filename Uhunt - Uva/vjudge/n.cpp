#include<bits/stdc++.h>
#define pii pair<int,int>
#define piii pair<pair<int, int> ,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
int dirx[8] = {1,1,1,-1,-1,-1,0,0};
int diry[8] = {1,-1,0,1,-1,0,1,-1};
int tc, n, m;
char arr[30][30];
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     int cc = 1;
     while (tc--){
          cin >> n >> m;
          vector<pii> job;
          vector<vector<pii > > tunnels(26, vector<pii>());
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
                    if (arr[i][j] == 'A' || arr[i][j] == 'B' || arr[i][j] == 'C'){
                         job.pb(mp(i,j));
                         // cout << i << "-"<< j << endl;
                    }else if (arr[i][j] >= 'E' && arr[i][j] <= 'Z'){
                         tunnels[arr[i][j]-'E'].pb(mp(i,j));
                         // cout << arr[i][j] << " " << i << " " << j << endl;
                    }
               }
          }
          // cout << "---\n";
          queue<piii> q;
          int vis[30][30];
          int reached = 0;
          int ans = 0;
          for (int i=0;i<job.size();i++){
               memset(vis, -1, sizeof(vis));
               q.push(mp(mp(job[i].fi, job[i].se), 0));
               // cout << arr[job[i].fi][job[i].se] << endl;
               while (!q.empty()){
                    piii cur = q.front(); q.pop();
                    if (vis[cur.fi.fi][cur.fi.se] != -1 && vis[cur.fi.fi][cur.fi.se] < cur.se) continue;
                    vis[cur.fi.fi][cur.fi.se] = cur.se;
                    if (arr[cur.fi.fi][cur.fi.se] == '#'){
                         // cout << "Reached safePlaces\n";
                         reached ++;
                         // cout << cur.se << endl;
                         ans = max(ans, cur.se);
                         break;
                    }
                    for (int i=0;i<8;i++){
                         int x = cur.fi.fi + dirx[i], y = cur.fi.se + diry[i];
                         if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != 'D'){
                              q.push(mp(mp(x, y), cur.se+1));
                         }
                    }
                    if (arr[cur.fi.fi][cur.fi.se] >= 'E' && arr[cur.fi.fi][cur.fi.se] <= 'Z'){
                         int tunnelName = arr[cur.fi.fi][cur.fi.se]-'E';
                         for (int j=0;j<tunnels[tunnelName].size();j++){
                              int x = tunnels[tunnelName][j].fi, y = tunnels[tunnelName][j].se;
                              if (x == cur.fi.fi && y == cur.fi.se) continue;
                              q.push(mp(mp(x, y), cur.se+1));
                         }
                    }
               }
          }
          if (reached != 3){
               cout << "Case " << cc ++ << ": impossible\n";
          }else{
               cout << "Case " <<  cc++ << ": " << ans <<"\n";
          }
     }


     return 0;
}
