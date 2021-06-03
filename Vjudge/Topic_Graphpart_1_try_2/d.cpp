#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > adjList;
vector<bool> vis;
vector<int> res;
int n, m;
void dfs(int x){
     vis[x] = true;
     for (int i=0;i<adjList[x].size();i++){
          int cur = adjList[x][i];
          if (!vis[cur] ){
               dfs(cur);
          }
     }
     res.push_back(x);
}
int main (){

     while (cin >> n >> m){
          if (n == 0 && m == 0) break;
          adjList = vector<vector<int> >(n, vector<int>());
          vis = vector<bool>(n,false);
          res.clear();
          int a, b;
          for (int i=0;i<m;i++){
               cin >> a >> b;
               adjList[a-1].push_back(b-1);
          }
          for (int i=0;i<n;i++){
               if (!vis[i]){
                    dfs(i);
               }
          }
          for (int i=res.size()-1;i>=0;i--){
               cout << res[i]+1 << " ";
          }
          cout << endl;

     }


     return 0;
}
