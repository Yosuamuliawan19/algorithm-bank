#include<iostream>
#include<queue>

using namespace std;
int main (){
     int tc;
     cin >> tc;
     while (tc--){
          int n, m;
          cin >> n >> m;

          string maze[101];
          string temp;
          queue<pair<int ,int> > q;
          for (int i=0;i<n;i++){
               cin >> temp;
               maze[i] = temp;

          }

          int sx, sy, gx, gy;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    if (maze[i][j] == '$'){
                         sx = i ; sy = j;
                         // cout <<" start found "<< i << endl;
                    }
               }
          }
          // cout << "sx " << sx << " sy "<< sy << endl;
          // cout << "made 1\n";
          q.push(make_pair(sx,sy));
          bool flag = false;
          int cnt =-1;
          int internal = 1;
          while (!q.empty()){
               // cnt ++; if (cnt == 10) break;
               pair<int,int> cur = q.front();q.pop();
               int x = cur.first, y = cur.second;
               internal --;
               if (internal == 0){
                    cnt ++;
               }
               // cout << "cur " << x << " " << y << endl;
               if (maze[x][y] == '#'){
                    // cout <<"found it "<<endl;
                    flag = true;
                    break;
               }

               if (x != 0){
                    if (maze[x-1][y] == 'O' || maze[x-1][y] == '#'){
                         q.push(make_pair(x-1,y));
                         internal++;
                    }
               }
               if (y != 0){
                    if (maze[x][y-1] == 'O' || maze[x][y-1] == '#'){
                         q.push(make_pair(x,y-1));
                         internal++;
                    }

               }
               if (x != n-1){
                    if (maze[x+1][y] == 'O' || maze[x+1][y] == '#'){
                         q.push(make_pair(x+1,y));
                         internal++;
                    }

               }
               if (y != m-1){
                    if (maze[x][y+1] == 'O' || maze[x][y+1] == '#'){
                         q.push(make_pair(x,y+1));
                         internal++;
                    }

               }
               maze[x][y] = '*';
          }
          if (flag){
               printf("%d\n", cnt);
          }else{
               printf("-1\n");
          }

     }
}
