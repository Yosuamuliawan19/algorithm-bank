#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
string maze[100];

queue< pair<int,int> > q;
int m, n;
void bfs (int x , int y){
     q.push(make_pair(x, y));
     maze[x][y] = '0';
     while(!q.empty()){
          pair<int,int> cur = q.front(); q.pop();
          cout << "cur "<<cur.first << " " << cur.second;
          cout << "value = "<< maze[cur.first][cur.second] << endl;
          for (int i =0;i<4;i++){
               int a = cur.first + dx[i], b = cur.second +dy[i];

               if (a >= 0 && a < m && b >= 0 && b <n  ){
                    if (maze[a][b] == 'O' || maze[a][b] == '#' ){
                         q.push(make_pair(a,b));
                         cout << "Adasd" << ((int)maze[cur.first][cur.second]) << endl;
                         if (maze[a][b] == '#'){
                              cout << ((int)maze[cur.first][cur.second])-48+ 1 << endl;
                              break;
                         }
                         maze[a][b] = (int)maze[cur.first][cur.second] + 1;

                    }
               }
          }
     }

}
int main (){
     int tc;
     cin >> tc;
     while (tc--){
          int sx, sy;

          cin >> m >> n;
          for (int i=0;i<m;i++){
               cin >> maze[i];
               for (int j=0;j<n;j++){
                    if (maze[i][j] == '$'){
                         sx = i, sy = j;
                         cout << sx << " " << sy << endl;
                    }
               }
          }
          bfs(sx, sy);

     }
     return 0;
}
