#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int dx[8] = {1,-1,0,0,1,1,-1,-1};
int dy[8] = {0,0,1,-1,-1,1,-1,1};
vector<vector<int> > maze;
int maxim = -1;
int n , m;
void dfs (int x, int y){
     if (maze[x][y] > maxim ){
          maxim = maze[x][y];
     }
     for (int i=0;i<8;i++){
          int a = x + dx[i], b = y + dy[i];
          if (a >= 0 && a < n && b >= 0 && b < n){
               if (maze[a][b] == (int)(maze[x][y] + 1)){
                    dfs(a,b);
               }
          }
     }
}
int main (){
     // cin >> n >> m ;
     int tc = 1;
     while (cin >> n >> m ){
          if (n == 0 && m == 0) break;
          string temp;
          maze = vector<vector<int> >(n, vector<int>(m,0));
          maxim = -1;
          vector<pair<int,int> > locs;

          for (int i=0;i<n;i++){
               cin >> temp;
               for (int j=0;j<m;j++){
                    maze[i][j] = (int) temp[j];
                    if (temp[j] == 'A'){
                         locs.push_back(make_pair(i,j));
                         // cout << i  << " " << j << endl;
                    }
               }
          }
          for (int i=0;i<locs.size();i++){
               dfs(locs[i].first, locs[i].second);
          }
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cout << maze[i][j] - 64 << " ";
			}
			cout << endl;
		}
          printf("Case %d: %d\n", tc , maxim - 64);
          tc ++ ;
     }


     return 0;
}
