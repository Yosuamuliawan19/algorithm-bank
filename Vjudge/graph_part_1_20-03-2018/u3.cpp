#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> smaze;
vector<vector<long long> > memo;

long long dx[8] = {1,1,1,-1,-1,-1,0,0};
long long dy[8] = {1,-1,0,1,-1,0,1,-1};
long long n, m;

long long dfs(long long x, long long y){
     if (memo[x][y] != 0){
          // cout << x <<" " << y << " already memorized\n";
          return memo[x][y];
     }
     long long child = 0;
     long long biggest = 0;
     for (long long i=0;i<8;i++){
          long long a = x + dx[i], b = y + dy[i];
          if (a >= 0 && a < n && b >= 0 && b < m){
               if (smaze[a][b] == smaze[x][y] + 1 ){
                    child ++;
                    int val = dfs(a,b);
                    if (val > biggest){
                         biggest = val;
                    }
               }
          }
     }
     if (child == 0){
          memo[x][y] = smaze[x][y] - 64;
          return memo[x][y];
     }else{
          memo[x][y] = biggest;
          return memo[x][y];
     }
}
int main (){
     long long tc = 1;
     while (cin >> n >> m){
          if (n == 0 && m == 0) break;
          smaze = vector<string>(n,"");
          memo = vector<vector<long long> >(n, vector<long long>(m,0));
          vector<pair<long long,long long> > locs;
          for (long long i=0;i<n;i++){
               cin >> smaze[i];
               for (long long j=0;j<m;j++){
                    if (smaze[i][j] == 'A'){
                         locs.push_back(make_pair(i,j));
                    }
               }
          }
          long long max = 0;
          for (long long i=0;i<locs.size();i++){
               long long cur = dfs(locs[i].first, locs[i].second);
               if (cur > max){
                    max = cur;
               }
          }
          // for (long long i=0;i<n;i++){
          //      for (long long j=0;j<m;j++){
          //           cout << memo[i][j] << " " ;
          //      }
          //      cout << endl;
          // }
          cout << "Case " << tc << ": "<< max << "\n";
          tc++;
     }


     return 0;
}
