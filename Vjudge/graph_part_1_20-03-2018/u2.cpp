#include<iostream>
#include<vector>
#include<string>

using namespace std;
int dx[8] = {1,-1,0,0,1,1,-1,-1};
int dy[8] = {0,0,1,-1,-1,1,-1,1};
int n, m;
string smaze[51];
vector<vector<int> > maze;
int dfs(int x, int y){
     if (maze[x][y] != 0){
          cout << "already before val = " << maze[x][y] - 64 <<  "\n";
          return maze[x][y];
     }
     cout << x << " " <<  y << " " << smaze[x][y] << endl;
     int cnt = 0;
     int max = -1;
     for (int i=0;i<8;i++){
          int a = x + dx[i], b = y + dy[i];
          if (a >= 0 && a < n && b >= 0 && b < m){
               if (smaze[a][b] == smaze[x][y] + 1){
                    cnt ++;


                    int val = dfs(a,b);
                    if (val > max){
                         max = val;
                    }
               }
          }
     }
     if (cnt == 0) {
          maze[x][y] = smaze[x][y];
          return smaze[x][y];
     }else{
          maze[x][y] = max;
          return max;
     }
}
int main (){
     int tc =1;
     while (cin >> n >> m){
          if (n == 0 && m == 0){
               break;
          }
          maze = vector<vector<int> >(n, vector<int>(m, 0));
          vector<pair<int,int> > locs;
          for (int i=0;i<n;i++){
               cin >> smaze[i];
               for (int j=0;j<m;j++){
                    if (smaze[i][j] == 'A'){
                         locs.push_back(make_pair(i,j));
                    }
               }
          }
          int res = 0;
          for (int i=0;i<locs.size();i++){

               int x = locs[i].first, y = locs[i].second;
               cout << "trying " << x << " " << y << endl;
               int val = dfs(x,y);
               cout << "val = " << val - 64 << "\n";

               if (val > res ){
                    res = val;
               }
          }
          // for (int i=0;i<n;i++){
          //      for (int j=0;j<m;j++){
          //           cout << maze[i][j] << " ";
          //      }
          //      cout << "\n";
          // }
          cout << "Case " << tc << ": " << res - 64<< "\n";
          tc ++ ;

     }

     return 0;
}
