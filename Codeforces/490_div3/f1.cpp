#include<iostream>
#include<vector>
#include<queue>
typedef long long ll;
using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int main (){
     ll tc, n, m, tmp;
     ll sx, sy, ex, ey;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          vector<vector<int> > maze(n, vector<int>(m));
          vector<vector<int> > vis(n, vector<int>(m, -1));
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> maze[i][j];
               }
          }
          cin >> sx >> sy >> ex >> ey;
          bool suc = false;
          queue<pair<int,int> > q;
          q.push(make_pair(sx-1,sy-1));
          vis[sx-1][sy-1] = 0;

          while (!q.empty()){
               pair<int,int> cur = q.front();q.pop();
               int x = cur.first, y = cur.second;
               // cout << "pro " << x+1 <<" " << y+1<<endl;
               if (x == ex-1 && y == ey-1){
                    cout << vis[x][y] << endl;
                    suc = true;
                    break;
               }
               int s,e;
               if ((maze[x][y] == 0 && (vis[x][y]%2 == 0))  ||
                    (maze[x][y] == 1 && (vis[x][y]%2 == 1)) ){
                    s=0;e=2;
               }else{
                    s=2;e=4;
               }
               for (int i=s;i<e;i++){
                    int a = x+dx[i], b = y+dy[i];
                    if (a >= 0 && a < n && b >= 0 && b < m && vis[a][b] == -1){
                         q.push(make_pair(a,b));
                         vis[a][b] = vis[x][y] +1;
                         // cout << a+1 << " " << b+1 << endl;
                    }
               }
          }
          if (!suc) cout << "-1\n";
     }


}
