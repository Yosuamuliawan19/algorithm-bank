#include<iostream>
#include<vector>
#include<queue>

using namespace std;
vector< vector<int> > mat;

int main(){
     int tc;
     scanf("%d" , &tc);
     for(int t=0;t<tc;t++){
          mat = vector<vector<int> >();
          int m , n;
          scanf("%d %d" , &m , &n);
          string temp ;
          int sx, sy;
          for (int i=0;i<m;i++){
               mat.push_back(vector<int>(n,0));
               cin >> temp;
               for (int j=0;j<n;j++){
                    if (temp[j] == '$'){
                         mat[i][j] = 0;
                         sx = i; sy = j;
                    }else if (temp[j] == 'O'){
                         mat[i][j] = -1;
                    }else if (temp[j] == '*'){
                         mat[i][j] = -2;
                    }else{
                         mat[i][j] = -3;
                    }
               }
          }
          int dx[4] = {1,-1,0,0};
          int dy[4] = {0,0,1,-1};
          queue<pair<int,int> > q;
          q.push(make_pair(sx,sy));
          int result = -1;
          bool flag = false;
          while(!q.empty()){
               pair<int,int> cur = q.front(); q.pop();
               int x = cur.first, y = cur.second;
               for (int i=0;i<4;i++){
                    int a =  x +dx[i], b = y+ dy[i];
                    if (a >= 0 && a != m && b >= 0 && b != n){
                         if (mat[a][b] == -1){
                              q.push(make_pair(a,b));
                              mat[a][b] = mat[x][y] + 1;
                         }else if (mat[a][b] == -3){
                              flag = true;
                              result = mat[x][y] + 1;
                              break;
                         }
                    }
               }
          }
          if (flag)
          cout << result << "\n";
          else
          cout << "-1\n";
     }

     return 0;
}
