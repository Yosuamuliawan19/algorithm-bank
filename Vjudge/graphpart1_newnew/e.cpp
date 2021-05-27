#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
char land;
string arr[20];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n, m;
int sx, sy;

int ff(int x, int y){
     if (y == m) y = 0;
     if (y == -1) y = m-1;
     if (x < 0 || x >= n || y < 0 || y >= m) return 0;
     if (arr[x][y] != land) return 0;
     int cnt = 1;
     arr[x][y] = (land +1);
     for (int i=0;i<4;i++){
          cnt += ff(x+dx[i], y+dy[i]);
     }
     return cnt;
}
int main (){
     string tmp;
     while (cin >> n >> m){
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          int mx = INT_MIN;
          cin >> sx >> sy;
          land = arr[sx][sy];
          int his = ff(sx,sy);
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    if (arr[i][j] == land){
                         int cur = ff(i,j);
                         if (cur > mx) mx = cur;
                    }
               }
          }
          if (mx == INT_MIN) mx = 0;
          cout << mx << endl;
          // for (int i=0;i<n;i++){
          //      for (int j=0;j<m;j++){
          //           cout << arr[i][j] << " ";
          //      }
          //      cout << endl;
          // }
          getline(cin, tmp);
     }





     return 0;
}
