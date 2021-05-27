#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int sx,sy,ex,ey;
bool inval = true;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int tc, n, m;
vector<vector<int> > maze;
vector<pair<int,int> > open;
void dfs(int x, int y){
     maze[x][y] = 1;
     for (int i=0;i<4;i++){
          int a = x+dx[i], b = y +dy[i];
          if (a >= 0 && a < n && b >= 0 && b < m && maze[a][b] == 0){
               if (a == ex && b == ey){
                    inval = false;
                    return;
               }
               dfs(a,b);
          }
     }
}
int main (){
     string tmp;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          maze = vector<vector<int> >(n, vector<int>(m));
          open.clear();
          for (int i=0;i<n;i++){
               cin >> tmp;
               for (int j=0;j<m;j++){

                    if (tmp[j] == '#'){
                         maze[i][j] =1;
                    }else{
                         if (j == 0 || j == m-1 || i == 0 || i == n-1){
                              open.push_back(make_pair(i,j));
                         }
                         maze[i][j] =0;
                    }
               }
          }
          // cout << open.size() << endl;
          if (open.size() != 2){
               cout << "invalid\n";
               continue;
          }
          pair<int,int> a = open[0];
          pair<int,int> b = open[1];
          sx = a.first; sy = a.second; ex = b.first; ey = b.second;
          inval = true;
          dfs(sx,sy);

          if (inval){
               cout << "invalid\n";
          }else{
               cout << "valid\n";
          }
     }




     return 0;
}
