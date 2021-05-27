#include<iostream>
using namespace std;
int board[20][20] = {0};
char cboard[20][20] = {0};
string s;
bool check(int x){
     if (x >= 0 && x < 8) return true;
     return false;
}
bool check2(int x, int y){
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
               if (board[i][j] == 0){
                    cout << "- ";
                    continue;
               }
               // if (cboard[i][j] == 'B' || cboard[i][j] == 'b' || cboard[i][j] == 'Q'){
               //      cout << "B ";
               //      continue;
               // }
               cout << board[i][j] << " ";
          }
          cout << endl;
     }
     cout << "-------\n";
}
void parse(string x){
     int a = 0, b = 0;
     for (int i=0;i<x.length();i++){
          if (x[i] == '/'){
               b=0;
               a++;
          }else if(x[i] >= '1' && x[i] <= '8'){
               b+= (int) (x[i] - '0');
          }else{
               cboard[a][b] = x[i];
               board[a][b] = 1;
               b++;
          }
     }
}
//pnbrqk
void PAWN(int x, int y){
     for (int i=y-1;i<=y+1;i++){
          if (i == y) continue;
          if (check2(x-1,i)){
               if (board[x-1][i] != 1)board[x-1][i] = 2;
          }
     }
}
void pawn(int x, int y){
     for (int i=y-1;i<=y+1;i++){
          if (i == y) continue;
          if (check2(x+1,i)){
               if (board[x+1][i] != 1)board[x+1][i] = 2;
          }
     }
}
void knight(int x, int y){
     int dx[8] = {2,2,1,1,-1,-1,-2,-2};
     int dy[8] = {1,-1,2,-2,2,-2,1,-1};
     for (int i=0;i<8;i++){
          int a = x+dx[i], b = y+dy[i];
          if (check2(a,b)){
               if (board[a][b] != 1) board[a][b] = 2;
          }
     }
}
void bishop(int x, int y){
     for (int i=1;i<8;i++){
          if (!check2(x+i,y+i)) break;
          if (board[x+i][y+i] == 1) break;
          board[x+i][y+i] = 2;
     }
     for (int i=1;i<8;i++){
          if (!check2(x-i,y+i)) break;
          if (board[x-i][y+i] == 1) break;
          board[x-i][y+i] = 2;
     }
     for (int i=1;i<8;i++){
          if (!check2(x+i,y-i)) break;
          if (board[x+i][y-i] == 1) break;
          board[x+i][y-i] = 2;
     }
     for (int i=1;i<8;i++){
          if (!check2(x-i,y-i)) break;
          if (board[x-i][y-i] == 1) break;
          board[x-i][y-i] = 2;
     }

}
void rook(int x, int y){
     // cout << x << " " << y << endl;
     for (int i=x+1;i<8;i++){
          if (board[i][y] == 1) break;
          board[i][y] = 3;
     }
     for (int i=x-1;i>=0;i--){
          if (board[i][y] == 1) break;
          board[i][y] = 3;
     }
     for (int i=y+1;i<8;i++){
          if (board[x][i] == 1) break;
          board[x][i] = 3;
     }
     for (int i=y-1;i>=0;i--){
          if (board[x][i] == 1) break;
          board[x][i] = 3;
     }
}
void queen(int x, int y){
     rook(x,y);
     bishop(x,y);
}
void king(int x, int y){
     int dx[8] = {1,1,1,-1,-1,-1,0,0};
     int dy[8] = {-1,0,1,-1,0,1,1,-1};
     for (int i=0;i<8;i++){
          int a = x+dx[i], b = y+dy[i];
          if (check2(a,b)){
               if (board[a][b] != 1) board[a][b] = 2;
          }
     }
}
int main (){

     while (cin >> s){
          if (s.length() == 0) continue;
          reset();
          parse(s);
          for (int i=0;i<8;i++){
               for (int j=0;j<8;j++){
                    char cur = cboard[i][j];
                    if (cur != '0'){
                         if (cur == 'P') PAWN(i,j);
                         else if (cur == 'p') pawn(i,j);
                         else if (cur == 'N' || cur == 'n') knight(i,j);
                         else if (cur == 'R' || cur == 'r') rook(i,j);
                         else if (cur == 'B' || cur == 'b') bishop(i,j);
                         else if (cur == 'Q' || cur == 'q') queen(i,j);
                         else if (cur == 'K' || cur == 'k') king(i,j);
                    }
               }
          }
          // print();
          cout << count() << endl;
     }

}
