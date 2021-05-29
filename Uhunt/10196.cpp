#include<iostream>
using namespace std;
int board[20][20] = {0};
string cboard[20];
string s;
int bx,by,wx,wy;
bool isb = 1;

bool check(int x){
     if (x >= 0 && x < 8) return true;
     return false;
}
bool check2(int x, int y){
     if (isb && x == wx && y == wy){
          board[x][y] = -100;
     }else if (!isb && x == bx && y == by){
          board[x][y] = 100;
     }
     return (check(x)&&check(y));
}
void reset(){
     for (int i=0;i<8;i++){
          for (int j=0;j<8;j++){
               board[i][j] = 0;
               cboard[i][j] = '0';
          }
     }
}
int count(){
     int cnt =0;
     for (int i=0;i<8;i++){
          for (int j=0;j<8;j++){
               if (board[i][j] == 0) cnt ++;
          }
     }
     return cnt;
}
void print(){
     for (int i=0;i<8;i++){
          for (int j=0;j<8;j++){
               // if (board[i][j] < 0){
               //      cout << "b ";
               //      continue;
               // }else if (board[i][j] > 0){
               //      cout << "w ";
               //      continue;
               // }else{
               //      cout << board[i][j] << " ";
               //
               // }
               cout << board[i][j] << " ";
          }
          cout << endl;
     }
     cout << "-------\n";
}
void parse(){
     for (int i=0;i<8;i++){
          for (int j=0;j<8;j++){
               char cur = cboard[i][j];
               if (cur != '.'){
                    if (cur == 'K' || cur == 'k'){
                         board[i][j] = 1;
                    }else board[i][j] = 1;

               }
          }
     }
}
//pnbrqk
void PAWN(int x, int y){
     for (int i=y-1;i<=y+1;i++){
          if (i == y) continue;
          if (check2(x-1,i)){
               if (board[x-1][i] != 1)board[x-1][i] = 100;
          }
     }
}
void pawn(int x, int y){
     for (int i=y-1;i<=y+1;i++){
          if (i == y) continue;
          if (check2(x+1,i)){
               if (board[x+1][i] != 1)board[x+1][i] = -100;
          }
     }
}
void knight(int x, int y, bool isb){
     int z = 100;
     if (isb) z= -100;

     int dx[8] = {2,2,1,1,-1,-1,-2,-2};
     int dy[8] = {1,-1,2,-2,2,-2,1,-1};
     for (int i=0;i<8;i++){
          int a = x+dx[i], b = y+dy[i];
          if (check2(a,b)){
               if (board[a][b] != 1) board[a][b] = z;
          }
     }
}
void bishop(int x, int y, bool isb){
     int z = 100;
     if (isb) z = -100;

     for (int i=1;i<8;i++){
          if (!check2(x+i,y+i)) break;
          if (board[x+i][y+i] == 1) break;
          board[x+i][y+i] = z;
     }
     for (int i=1;i<8;i++){
          if (!check2(x-i,y+i)) break;
          if (board[x-i][y+i] == 1) break;
          board[x-i][y+i] = z;
     }
     for (int i=1;i<8;i++){
          if (!check2(x+i,y-i)) break;
          if (board[x+i][y-i] == 1) break;
          board[x+i][y-i] = z;
     }
     for (int i=1;i<8;i++){
          if (!check2(x-i,y-i)) break;
          if (board[x-i][y-i] == 1) break;
          board[x-i][y-i] = z;
     }

}
void rook(int x, int y, bool isb){
     int z = 100;
     if (isb) z= -100;
     for (int i=x+1;i<8;i++){
          if (!check2(i,y)) break;
          if ( board[i][y] == 1) break;
          board[i][y] = z;
     }
     for (int i=x-1;i>=0;i--){
          if (!check2(i,y)) break;
          if ( board[i][y] == 1) break;
          board[i][y] = z;
     }
     for (int i=y+1;i<8;i++){
          if (!check2(x,i)) break;
          if ( board[x][i] == 1) break;
          board[x][i] = z;
     }
     for (int i=y-1;i>=0;i--){
          if (!check2(x,i)) break;
          if ( board[x][i] == 1) break;
          board[x][i] = z;
     }
}
void queen(int x, int y, bool isb){
     rook(x,y,isb);
     bishop(x,y,isb);
}
// bool king(int x, int y, bool isblack){
//      int dx[8] = {1,1,1,-1,-1,-1,0,0};
//      int dy[8] = {-1,0,1,-1,0,1,1,-1};
//      int cnt = 0;
//      for (int i=0;i<8;i++){
//           int a = x+dx[i], b = y+dy[i];
//           if (check2(a,b)){
//                if (board[a][b] == 1 && isblack) cnt ++;
//                else if (board[a][b] == -1 && !isblack) cnt ++;
//           }else{
//                cnt ++;
//           }
//      }
//      cout << cnt << endl;
//      return (cnt == 8);
//
// }
int game = 1;

void findk(){
     for (int i=0;i<8;i++){
          for (int j=0;j<8;j++){
               if (cboard[i][j] == 'K'){
                    wx = i;
                    wy = j;
               }else if (cboard[i][j] == 'k'){
                    bx = i;
                    by = j;
               }
          }
     }
}
int main (){

     while (cin >> s){
          reset();
          // input
          bool end = 1;
          cboard[0] = s;
          if (s != "........") end = 0;
          for (int i=1;i<8;i++){
               cin >> cboard[i];
               if (cboard[i] != "........") end = 0;
          }
          if (end) break;
          // process
          parse();
          findk();
          // print();
          bool b = 0, w = 0;
          for (int i=0;i<8;i++){
               for (int j=0;j<8;j++){
                    char cur = cboard[i][j];
                    if (cur >= 'a') isb = 1;
                    else isb = 0;
                    if (cur != '0'){
                         if (cur == 'P') PAWN(i,j);
                         else if (cur == 'p') pawn(i,j);
                         else if (cur == 'N' || cur == 'n') knight(i,j, isb);
                         else if (cur == 'R' || cur == 'r') rook(i,j,isb);
                         else if (cur == 'B' || cur == 'b') bishop(i,j,isb);
                         else if (cur == 'Q' || cur == 'q') queen(i,j,isb);
                    }
                    if (board[wx][wy] == -100) w = 1;
                    if (board[bx][by] == 100) b = 1;
               }
          }
          // print();
          if (b){
               cout << "Game #" <<game++ << ": black king is in check.\n";
          }else if (w){
               cout << "Game #" <<game++ << ": white king is in check.\n";
          }else{
               cout << "Game #" <<game++ << ": no king is in check.\n";
          }

     }

}
