#include<iostream>
#include<queue>

#include<vector>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int main (){
     int tc, n, m;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          vector<vector<int> > fire(n, vector<int>(m,0));
          vector<vector<int> > joe(n, vector<int>(m,0));
          vector<string> maze(n,"");
          int startx, starty;
          queue<pair<int,int> > q;
          for (int i=0;i<n;i++){
               cin >> maze[i];
               for (int j=0;j<m;j++){
                    if (maze[i][j] == 'J'){
                         startx = i;
                         starty = j;
                    }else if (maze[i][j] == 'F'){
                         fire[i][j] = 1;
                         q.push(make_pair(i,j));
                    }
               }
          }
          // bfs for fire
          while (!q.empty()){
               pair<int,int> cur = q.front();q.pop();
               int x = cur.first, y = cur.second;
               for (int i=0;i<4;i++){
                    int a = x + dx[i], b = y + dy[i];
                    if (a >= 0 && a < n && b >=0 && b < m){
                         if (maze[a][b] != '#'){
                              if (fire[a][b] == 0 || (fire[a][b] > fire[x][y] + 1 )){
                                   fire[a][b] = fire[x][y] + 1;
                                   q.push(make_pair(a,b));
                              }
                         }
                    }
               }
          }
          cout << "fires array \n" ;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cout << fire[i][j] << " ";
               }
               cout << "\n";
          }
          joe[startx][starty] = 1;
          bool suc = false;
          int endx, endy;
          q.push(make_pair(startx, starty));
          while (!q.empty()){
               pair<int,int> cur = q.front(); q.pop();
               int x = cur.first, y = cur.second;
               for (int i=0;i<4;i++){
                    int a = x + dx[i], b = y + dy[i];
                    if (a >= 0 && a < n && b >= 0 && b < m){
                         if (joe[a][b] == 0 && maze[a][b] != '#' && fire[a][b] != 0 && (fire[a][b] > joe[x][y] + 1)){
                              // if (a == 1 && b == 2){
                              //      cout << "found "<< fire[a][b] << " " << joe[x][y] +1<<endl;
                              // }
                              cout << "fire = " << fire[a][b] << " joe = " << joe[x][y] + 1 << endl;
                              if (a == 0 || b == 0 || a == n-1 || b == m-1){
                                   suc = true;
                                   endx = a;
                                   endy = b;
                                   cout << "end found at " << a << " " << b << endl;
                              }
                              q.push(make_pair(a,b));
                              joe[a][b] = joe[x][y] + 1;
                         }
                    }
               }
          }
          cout << "joe array \n" ;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cout << joe[i][j] << " ";
               }
               cout << "\n";
          }
          if (suc){
               cout << joe[endx][endy] << "\n";
          }else{
               cout << "IMPOSSIBLE\n";
          }
     }
     return 0;
}
