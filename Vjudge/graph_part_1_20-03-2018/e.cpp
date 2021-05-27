#include<iostream>
#include<string>
using namespace std;
string map[30];
int v[30][30];
int m, n;
char c1 = 'a', c2 = 'b';
// int dx[8] = {1,-1,0,0,1,1,-1,-1};
// int dy[8] = {0,0,1,-1,-1,1,-1,1};
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

char land;
int dfs(int x, int y){
     if ( y == n  ) y = 0;
     if ( y == -1) y = n-1;
     if ( x<0 || x >= m || y<0 || y>=n){
          return 0;
     }
     // cout << "Asdas" << endl;
     if (v[x][y] == 1 || map[x][y] != land ) return 0;
     v[x][y] = 1;
      // cout << x <<" "<<y<<endl;
     int ans = 1;
     for (int i=0;i<4;i++){
          ans += dfs(x+dx[i],y+dy[i]);
     }
     return ans;
}
int main(){
     // freopen("i.txt","r",stdin);
     // freopen("o.txt","w",stdout);
     string temp;
     while (cin >> m >> n){
          for (int i=0;i<m;i++){
               cin >> map[i];
               for (int j=0;j<n;j++){
                    v[i][j] = 0;
               }
          }
          int x,y;
          cin >> x >> y;
          land = map[x][y];
          // cout << "land " <<land<<endl;
          int his =  dfs(x,y);
           // cout << "---" <<endl;
          int max = 0;

          for (int i=0;i<m;i++){
               for (int j=0;j<n;j++){
                    if (map[i][j] == land){
                         int res = dfs(i,j);
                         if (res > max){
                              max = res;
                         }
                    }
               }
          }

               cout << max << endl;


          getline(cin, temp);
     }
     return 0;
}
