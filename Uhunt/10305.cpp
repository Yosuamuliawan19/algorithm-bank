#include<iostream>
#include<vector>
using namespace std;
vector <vector< int> > adjList;
vector<int> visited;
vector <int> result;
void dfs(int x){
     visited[x] = 1;
     for (int i=0;i<adjList[x].size();i++){
          if (visited[adjList[x][i]] == 0){
               dfs(adjList[x][i]);
          }
     }
     result.push_back(x);
}
int main(){
     int n , e ;
     while (cin >> n >> e){
          adjList.clear();
          visited.clear();
          result.clear();
          if (n == 0 && e == 0) break;
          int x , y ;
          for (int i=0;i<n;i++){
               adjList.push_back(vector<int>());
               visited.push_back(0);
          }
          for (int i=0;i<e;i++){
               cin >> x >> y;
               adjList[x-1].push_back(y-1);

          }
          for (int i=0;i<n;i++){
               if (visited[i] == 0){
                    dfs(i);
               }
          }
          for (int i=result.size()-1;i>=0;i--){
               cout << result[i] +1;
               if (i != 0) cout <<" ";
          }
          cout << "\n";

     }
}
