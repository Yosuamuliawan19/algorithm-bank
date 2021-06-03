#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int dx[8] = {2,2,-2,-2,1,1,-1,-1};
int dy[8] = {1,-1,1,-1,2,-2,2,-2};
int main (){
     int tc, sx, sy, ex, ey;
     cin >> tc;
     cin.ignore();
     string inp;
     while (tc--){
          vector<vector<int> > board(8, vector<int>(8, 0));
          getline(cin, inp);
          cout << inp << endl;
          sx = inp[0] - 97 ,sy = inp[1] - 48 -1;
          ex = inp[3] - 97 ,ey = inp[4] - 48 -1;
          queue<pair<int,int> > q;
          q.push(make_pair(sx,sy));
          board[sx][sy] = 1;
          while (!q.empty()){
               pair<int,int> cur = q.front(); q.pop();
               int x = cur.first, y = cur.second;
               for (int i=0;i<8;i++){
                    int a = x+dx[i], b = y+dy[i];
                    if (a >= 0 && a < 8 && b >= 0 && b < 8 && board[a][b] == 0){
                         board[a][b] = board[x][y] + 1;
                         q.push(make_pair(a,b));
                         if (a == ex && b == ey){
                              break;
                         }
                    }
               }
          }
          cout << board[ex][ey]-1 << endl;

     }



     return 0;
}
