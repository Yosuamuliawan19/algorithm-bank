#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;

ll tc, n, m, arr[110][110], sx, sy, ex, ey, ans = 0;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
void bfs(){
     queue<pair<pii, int> > q;
     q.push(mp(mp(sx, sy),0));
     ans = -1;
     while (!q.empty()){
          pair<pii, int> cur = q.front(); q.pop();
          arr[cur.fi.fi][cur.fi.se] = -1;
          // cout << cur.fi.fi << " " << cur.fi.se << " " << cur.se << endl;
          if (cur.fi.fi == ex && cur.fi.se == ey){
               ans = cur.se;
               break;
          }
          for (int i=0;i<4;i++){
               ll curx = cur.fi.fi + dirx[i], cury = cur.fi.se + diry[i];
               if (curx >= 0 && curx < n && cury >= 0 && cury < m && arr[curx][cury] == 0){
                    q.push(mp(mp(curx, cury), cur.se +1));
               }
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     char c;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> c;
                    if (c == '$'){
                         arr[i][j] = 0;
                         sx = i; sy = j;
                    }else if (c == '#'){
                         arr[i][j] = 0;
                         ex = i; ey = j;
                    }else if (c == '*'){
                         arr[i][j] = 1;
                    }else{
                         arr[i][j] = 0;
                    }
               }
          }

          // cout << sx << " " << sy <<" " << ex << " " << ey <<endl;
          bfs();
          cout << ans << endl;
     }

     return 0;
}
