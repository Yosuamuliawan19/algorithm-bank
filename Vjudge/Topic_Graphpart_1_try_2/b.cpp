#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int tc, n, m;
int maze[101][101];
int main(){
     string tmp;
     cin >> tc;
     while (tc--){
          int sx,sy,ex,ey;
          cin >> m >> n;
          for (int i=0;i<m;i++){
               cin >> tmp;
               for (int j=0;j<n;j++){
                    char cur = tmp[j];
                    if (cur == '$'){
                         sx = i; sy = j;
                         maze[i][j] = -1;
                    }else if (cur == '#'){
                         ex = i; ey = j;
                         maze[i][j] = -1;
                    }else if (cur == 'O'){
                         maze[i][j] = -1;
                    }
               }
          }
          queue<pair<int,int> > q;
          q.push(make_pair(sx,sy));
          maze[sx][sy] = 0;
          while (!q.empty()){
               pair<int,int> cur = q.front(); q.pop();
               int x = cur.first, y = cur.second;
               for (int i=0;i<4;i++){
                    int a = x + dx[i], b = y + dy[i];
                    if (a >= 0 && a < m && b >= 0 && b < n && maze[a][b] == -1){
                         maze[a][b] = maze[x][y] + 1;
                         q.push(make_pair(a,b));
                    }
               }
          }
          cout << maze[ex][ey] << endl;


     }




     return 0;
}
