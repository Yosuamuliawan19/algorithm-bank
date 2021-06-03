#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
using namespace std;
const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};
int t, n, m, sx, sy, ex, ey; char cur;
int grid[110][110] = {0};
void bfs(){
     queue<pair<int,int> > q;
     q.push(mp(sx,sy));
     grid[sx][sy] = 0;
     while (!q.empty()){
          pair<int,int> cur = q.front(); q.pop();
          int x = cur.fi, y = cur.se;
          for (int i=0;i<4;i++){
               int a = x + dx[i] , b = y + dy[i];
               if (a >= 0 && a < n && b >= 0 && b < m && grid[a][b] != -2 && grid[a][b] > grid[x][y] + 1){
                    q.push(mp(a,b));
                    grid[a][b] = grid[x][y] + 1;
               }
          }
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> t;
     while (t--){
          memset(grid, 0, sizeof(grid));
          cin >> n >> m;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> cur;
                    if (cur == '$') grid[i][j] = INT_MAX, sx = i, sy = j;
                    else if (cur == '#') grid[i][j] = INT_MAX, ex = i, ey = j;
                    else if (cur == '*') grid[i][j] = -2;
                    else grid[i][j] = INT_MAX;
               }
          }
          bfs();
          cout << (grid[ex][ey] == INT_MAX ? -1 : grid[ex][ey])<< endl;
     }

     return 0;
}
