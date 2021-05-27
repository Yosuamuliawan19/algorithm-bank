#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;
const int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1};
int m, n, sx, sy;
char land;
char graph[30][30];
int floodfill(int x, int y){
     graph[x][y] = '-';
     int size = 1;
     for (int i=0;i<4;i++){
          int a = x + dx[i], b = y + dy[i];
          if (b == n) b = 0;
          if (b == -1) b = n-1;
          if (a >= 0 && a < m && b >= 0 && b < n && graph[a][b] == land){
               size += floodfill(a,b);
          }
     }
     return size;
}
int main (){
     while (cin >> m >> n){
          if (!m && !n) break;
          for (int i=0;i<m;i++){
               for (int j=0;j<n;j++){
                    cin >> graph[i][j];
                    // cout << graph[i][j];
               }
               // cout << endl;
          }
          cin >> sx >> sy;
          land = graph[sx][sy];
          floodfill(sx, sy);
          // for (int i=0;i<m;i++){
          //      for (int j=0;j<n;j++){
          //           cout << graph[i][j];
          //      }
          //      cout << endl;
          // }
          int mx = 0;
          for (int i=0;i<m;i++){
               for (int j=0;j<n;j++){
                    if (graph[i][j] == land){
                         mx = max(mx, floodfill(i,j));
                    }
               }
          }

          cout << mx << endl;
     }


}
