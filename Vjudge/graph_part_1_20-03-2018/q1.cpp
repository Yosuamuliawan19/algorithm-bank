#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>

using namespace std;
int main (){
     long long tc, n, m, sx, sy, ex, ey;
     cin >> tc;

     vector<string> maze;
     vector<vector<long long> > joe;
     vector<vector<long long> > fire;
     queue<pair<long long,long long> > q;

     long long dx[4] = {1,-1,0,0};
     long long dy[4] = {0,0,-1,1};

     while (tc--){
          cin >> n >> m;
          maze = vector<string> (n);
          joe  = vector<vector<long long> > (n, vector<long long> (m, LLONG_MAX)) ;
          fire = vector<vector<long long> > (n, vector<long long> (m, LLONG_MAX)) ;
          while (!q.empty()) q.pop();

          for (long long i = 0;i<n;i++){
               cin >> maze[i];
               for (long long j=0;j<m;j++){
                    if (maze[i][j] == 'J'){
                         sx = i;
                         sy = j;
                    }else if (maze[i][j] == 'F'){
                         q.push(make_pair(i,j));
                         fire[i][j] = 0;
                    }
               }
          }

          while (!q.empty()){
               pair<long long,long long> cur = q.front(); q.pop();
               long long x = cur.first, y = cur.second;
               for (long long i=0;i<4;i++){
                    long long a = x + dx[i], b = y + dy[i];
                    if (a >= 0 && a < n && b >= 0 && b < m){
                         if (fire[a][b] == LLONG_MAX
                              && maze[a][b] != '#'
                              && fire[a][b] > fire[x][y] + 1){
                              fire[a][b] = fire[x][y] + 1;
                              q.push(make_pair(a,b));
                         }
                    }
               }
          }

          q.push(make_pair(sx,sy));
          joe[sx][sy] = 0;
          while (!q.empty()){
               pair<long long,long long> cur = q.front(); q.pop();
               long long x = cur.first, y = cur.second;
               for (long long i=0;i<4;i++){
                    long long a = x + dx[i], b = y + dy[i];
                    if (a >= 0 && a < n && b >= 0 && b < m){
                         if (joe[a][b] == LLONG_MAX && maze[a][b] != '#'){
                              q.push(make_pair(a,b));
                              joe[a][b] = joe[x][y] + 1;
                         }
                    }
               }
          }

          // cout << "fires \n";
          // for (long long i=0;i<n;i++){
          //      for (long long j=0;j<m;j++){
          //           if (fire[i][j] == LLONG_MAX){
          //                cout << "* ";
          //                continue;
          //           }
          //           cout << fire[i][j] << " ";
          //      }
          //      cout << "\n";
          // }
          // cout << "joe \n";
          // for (long long i=0;i<n;i++){
          //      for (long long j=0;j<m;j++){
          //           if (joe[i][j] == LLONG_MAX){
          //                cout << "* ";
          //                continue;
          //           }
          //           cout << joe[i][j] << " ";
          //      }
          //      cout << "\n";
          // }

          long long minim = LLONG_MAX;
          for (long long i=0;i<m;i++){
               if (fire[0][i] > joe[0][i] ){
                    minim = min (minim, joe[0][i]);
               }
               if (fire[n-1][i] > joe[n-1][i]){
                    minim = min (minim, joe[n-1][i]);
                    // cout << m-1 << " " <<  i  <<"\n";
               }
          }
          for (long long i=0;i<n;i++){
               if (fire[i][0] > joe[i][0] ){
                    minim = min (minim, joe[i][0]);
               }
               if (fire[i][m-1] > joe[i][m-1]){
                    minim = min (minim, joe[i][m-1]);
               }
          }
          if (minim == LLONG_MAX){
               cout << "IMPOSSIBLE\n";
          }else{
               cout << minim + 1 << endl;
          }

     }
     return 0;
}
