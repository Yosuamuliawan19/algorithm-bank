#include<iostream>
#include<vector>

using namespace std;
vector< vector<int> > adjList;
vector< int > dist;
vector< int > result;
void dfs (int x){
     dist[x] = 1;
     for (int i=0;i<adjList[x].size();i++){
          int cur = adjList[x][i];
          if (dist[cur] == 0){
               dfs(cur);
          }
     }
     result.push_back(x+1);

}
int main (){
     int n , m;
     while (cin >> n >> m ){
          adjList.clear();
          dist.clear();
          result.clear();
          for (int i=0;i<n;i++){
               adjList.push_back(vector<int>());
               dist.push_back(0);
          }
          int x , y ;
          for (int i=0;i<m;i++){
               cin >> x >> y;
               adjList[x-1].push_back(y-1);
          }
          for (int i=0;i<n;i++){
               if (dist[i] == 0){
                    dfs(i);
               }
          }
          for (int i=result.size() -1 ; i >= 0;i--){
               cout << result[i];
               if (i != 0) cout << " ";
          }
          cout << endl;
     }





     return 0;
}
