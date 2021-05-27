#include<iostream>
#include<stdio.h>
using namespace std;
string adjMatrix[1000];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int walls = 0;
int n , m , k;
void print(){
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cout << adjMatrix[i][j];
          }
          cout << endl;
     }
}
void bfs(int x, int y){
     adjMatrix[x][y] = 'v';
     //print();
     if (adjMatrix[x][y] == '*') return;
     for (int i=0;i<4;i++){
          int a = x + dx[i] , b = y + dy[i];
          if (a >= 0 && a < n && b >= 0 && b < m ){
               if (adjMatrix[a][b] == '.'){
                    dfs(a,b);
               }else if (adjMatrix[a][b] == '*'){
                    walls++;
               }
          }
     }
}

int main (){
     scanf("%d %d %d" , &n, &m, &k);
     for (int i=0;i<n;i++){
          cin >> adjMatrix[i];
     }
     int x , y;
     for (int i=0;i<k;i++){
          scanf("%d %d" , &x, &y);
          bfs(x-1 , y-1);
          printf("%d", walls);
          walls = 0;
     }

}
