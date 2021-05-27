#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int main (){
     ll tc, n, m, tmp;
     ll si, sj, fi, fj;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          vector<vector<int> > maze(n, vector<int>(m));
          vector<vector<int> > vis(n, vector<int>(m, false));

          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> maze[i][j];
               }
          }
          cin >> si >> sj >> fi >> fj;
          si--;sj--;fi--;fj--;
          bool swit = true;
          queue<pair<int,int> > q;
          q.push(make_pair(si,sj));
          vis[si][sj] = true;
          maze[si][sj] = 0;
          bool suc = false;
          while (!q.empty()){
               pair<int,int> cur = q.front(); q.pop();
               int x = cur.first, y = cur.second;
               cout << "x = " << x+1 << " y = " << y+1 << endl;
               if (x == fi && y == fj){
                    cout << maze[x][y] << endl;
                    suc = true;
                    break;
               }
               if ((maze[x][y] == 0 && swit )||(maze[x][y] == 1 && !swit ) ){
                    for (int i=0;i<2;i++){
                         int a=x+dx[i],b=y+dy[i];
                         // cout << "trying " << a +1<< " " << b+1 << endl;
                         if (a >= 0 && a < n && b >=0 && b < m && !vis){
                              q.push(make_pair(a,b));
                              vis[a][b] = true;
                              maze[a][b] = maze[x][y] + 1;
                         }
                    }
               }else{
                    for (int i=2;i<4;i++){
                         int a=x+dx[i],b=y+dy[i];
                         // cout << "trying " << a +1<< " " << b+1 << endl;

                         if (a >= 0 && a < n && b >=0 && b < m && !vis ){
                              q.push(make_pair(a,b));
                              vis[a][b] = true;
                              maze[a][b] = maze[x][y] + 1;
                         }
                    }
               }
          }
          if (!suc) cout << "-1\n";
     }
}
