#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
     int tc;
     cin >> tc;
     while (tc--){
          int n,m;
          cin >> n >> m;
          string maze[100];
          string temp;
          int sx, sy;
          bool endexist = false;
          for (int i=0;i<n;i++){
               cin >> temp;
               maze[i] = temp;
               for (int j=0;j<n;j++){
                    if (temp[j] == '$'){
                         sx = i; sy= j;
                         // cout << "start " << sx << " " << sy <<endl;
                    }
                    if (temp[j] == '#'){
                         endexist = true;
                    }
               }
          }

          queue< pair<int,int> > q;
          q.push(make_pair(sx,sy));
          int dirx[4] = {1,-1,0,0};
          int diry[4] = {0,0,1,-1};
          int levels = 0, prevcount = 1, count = 0;
          bool flag = false;
          // cout << "maze " << maze[2][3] <<endl;
          while(!q.empty()){
               if (!endexist) break;
               pair<int ,int> cur = q.front();q.pop();
               int x = cur.first, y = cur.second;
               // cout << "current " << x << " " << y <<endl;
               if (maze[x][y] == '#'){
                    flag = true;
                    break;
               }
               for (int i=0;i<4;i++){
                      // cout << "checking " << x+dirx[i] << " " << y+diry[i] << " " << m << " " << n <<" ";
                    if (x+dirx[i] >= 0 && x+dirx[i] < n
                         && y+diry[i] >= 0 && y+diry[i] < m){
                               // cout << "made it ";
                              if (maze[x+dirx[i]][y+diry[i]] == 'O' ||
                                   maze[x+dirx[i]][y+diry[i]] == '#'){
                                     // cout << " --";
                                   q.push(make_pair(x+dirx[i] , y+diry[i]));
                                   count++;
                              }
                    }
                     // cout << endl;
               }

               maze[x][y] = '*';
               prevcount --;
               // cout << "counts " <<  count << " " << prevcount <<endl;

               if (prevcount == 0){
                    // cout <<"changing level \n";
                    prevcount = count;
                    count = 0;
                    levels++;
               }

          }
          if (flag){
               cout << levels <<endl;
          }else{
               cout << -1 << endl;
          }



     }
}
