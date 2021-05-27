#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

bool check(int a, int b){
     if (a >= 0 && a < 8 && b >= 0 && b < 8){
          return 1;
     }
     return 0;
}
int main()
{
	string s;
     int board[8][8] = {0};
     char cb[8][8];
     while (cin >> s){
          FOR(i,0,7)FOR(j,0,7)board[i][j] = 0;
          FOR(i,0,7)FOR(j,0,7)cb[i][j] = '0';

          int x=0,y=0;
          for (int i=0;i<s.length();i++){
               if (s[i] == '/'){
                    y++;
                    x=0;
               }else if (s[i] > '0' && s[i] < '9'){
                    x+= (s[i]-'0');
               }else{
                    board[y][x] = 1;
                    cb[y][x] = s[i];
                    x++;
               }
          }
          for (x=0;x<8;x++){
               for(y=0;y<8;y++){
                    if (board[y][x] == 1){
                         if (cb[y][x] == 'P' && y != 0){
                              for (int j=x-1;j<=x+1;j++){
                                   if (j >= 0 && j < 8 ){
                                        if (board[y-1][j] != 1) board[y-1][j] = 2;
                                   }
                              }
                         }
                         if (cb[y][x] == 'p' && y != 7){
                              for (int j=x-1;j<=x+1;j++){
                                   if (j >= 0 && j < 8 ){
                                        if (board[y+1][j] != 1) board[y+1][j] = 2;
                                   }
                              }
                         }

                         if (cb[y][x] == 'N' || cb[y][x] == 'n'){
                              int dx[8] = {1,2,1,2,-1,-2,-1,-2};
                              int dy[8] = {2,1,-2,-1,2,1,-2,-1};
                              for (int j=0;j<8;j++){
                                   int a = x+dx[j], b = y+dy[j];
                                   if (check(a,b)){
                                        if (board[b][a] != 1) board[b][a] = 7;
                                   }
                              }
                         }
                         bool isQueen = 0;
                         if (cb[y][x] == 'Q' || cb[y][x] == 'q'){
                              isQueen = 1;
                         }
                         if (cb[y][x] == 'B' || cb[y][x] == 'b' || isQueen){
                              int a = x, b = y;
                              while (check(a,b)){
                                    board[b++][a++] = 9;
                                    if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)){
                                   board[b++][a--] = 9;
                                   if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)){
                                   board[b--][a++] = 9;
                                   if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)) {
                                   board[b--][a--] = 9;
                                   if (board[b][a] == 1) break;
                              }
                              board[y][x] = 1;
                         }
                         if (cb[y][x] == 'R' || cb[y][x] == 'r' || isQueen){
                              int a = x, b = y;
                              while (check(a,b)){
                                    board[b][a++] = 3;
                                    if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)){
                                   board[b++][a] = 3;
                                   if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)){
                                   board[b][a--] = 3;
                                   if (board[b][a] == 1) break;
                              }
                              a = x; b = y;
                              while (check(a,b)) {
                                   board[b--][a] = 3;
                                   if (board[b][a] == 1) break;
                              }
                              board[y][x] =1;
                         }
                         if (cb[y][x] == 'K' || cb[y][x] == 'k'){
                              int dx[8] = {1,1,1,0,0,-1,-1,-1};
                              int dy[8] = {-1,1,0,-1,1,-1,1,0};
                              for (int j=0;j<8;j++){
                                   int a = x+dx[j], b = y+dy[j];
                                   if (a >= 0 && a < 8 && b >= 0 && b < 8){
                                        if (board[b][a] == 1) continue;
                                        board[b][a] = 4;
                                   }
                              }
                         }

                    }
               }
          }
          int cnt = 0;
          for (int i=0;i<8;i++){
               for (int j=0;j<8;j++){
                    if (board[i][j] == 0) cnt ++;
                    cout << board[i][j] << " ";
               }
               cout << endl;
          }
          cout << cnt << endl;

     }

	return 0;
}
