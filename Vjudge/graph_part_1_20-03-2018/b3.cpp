#include<iostream>
#include<queue>

using namespace std;
int maze[101][101] = {0};
int main (){
     int tc; cin >> tc;
     while (tc--){
          int m , n;
          cin >> m >> n;
          string temp;
          int sx, sy;
          for (int i=0;i<m;i++){
               cin >> temp; ;
               for (int j=0;j<n;j++){
                    if (temp[j] == 'O'){
                         maze[i][j] = -2;
                    }else if (temp[j] == '*'){
                         maze[i][j] = 1;
                    }else if (temp[j] == '$'){
                         maze[i][j] = 0;
                         sx = i ; sy = j;
                    }else if (temp[j] == '#'){
                         maze[i][j] = -1;
                    }
               }
          }
          int dx[4] = {1,-1,0,0};
          int dy[4] = {0,0,1,-1};
          queue < pair <int, int> > q;
          q.push(make_pair(sx,sy));
          bool flag = false;
          int result = -1;
          while (!q.empty()){
               pair<int,int> cur = q.front();q.pop();
               int a = cur.first, b = cur.second;
               // cout << a<<" " << b << " " << maze[a][b] << endl;
               // print
               // cout << "----\n";
               // for (int i=0;i<m;i++){
               //      for (int j=0;j<n;j++){
               //           cout << maze[i][j];
               //      }
               //      cout << endl;
               // }
               // cout << "----\n";
               for (int i=0;i<4;i++){
                    int x = a + dx[i], y = b + dy[i];
                    if (x >= 0 && x < m && y>=0 && y < n){
                         // cout << x << y <<endl;
                         if (maze[x][y] == -2){
                              q.push(make_pair(x,y));
                              maze[x][y] = maze[a][b] + 1;
                         }else if (maze[x][y] == -1){
                              result = maze[a][b] + 1;
                              flag = true;
                              break;
                         }
                    }
               }

          }
          if (flag){
               cout << result << endl;

          }else{
               cout << -1 << endl;
          }

     }
}
