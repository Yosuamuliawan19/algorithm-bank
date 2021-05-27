#include<iostream>
#include<vector>
#include<queue>

#define  FOR(a,b) for(int i =a; i<b;i++)
using namespace std;


vector< vector < pair <int,int> > > adjList;

vector<bool> dfs_visited;
void dfs (int x){
     dfs_visited[x] = true;
     for (int i=0;i<adjList[x].size();i++){
          if (!dfs_visited[adjList[x][i].first]){
               dfs(adjList[x][i].first);
          }
     }
}
vector<int> bfs_distance;
queue<int> q;
void bfs (int x){
     q.push(x);
     bfs_distance[x] = 0;

     while (!q.empty()){
          int u = q.front();q.pop();
          for (int i=0;i<adjList[u].size();i++){
               int l = adjList[u][i].first ;
               if (bfs_distance[l] == -1){
                    q.push(l);
                    bfs_distance[l] = bfs_distance[u] + adjList[u][i].second;
               }
          }
     }
}
vector<int> ts;
vector<bool> topoQ;
void topoSort(int x){
     topoQ[x] = true;
     for (int i=0;i<adjList[x].size();i++){
          if (!topoQ[adjList[x][i].first]){
               topoSort(adjList[x][i].first);
          }
     }
     ts.push_back(x);
}
int main (){
     //Adjacency list;
     adjList.push_back(vector < pair <int,int> >() );
     adjList.push_back( vector< pair<int,int> >());
     adjList.push_back( vector< pair<int,int> >());
     adjList[2].push_back(make_pair(3, 0));
     adjList.push_back(vector < pair <int,int> >() );
     adjList[3].push_back(make_pair(1, 0));
     adjList.push_back( vector< pair<int,int> >());
     adjList[4].push_back(make_pair(0, 0));
     adjList[4].push_back(make_pair(1, 0));
     adjList.push_back( vector< pair<int,int> >());
     adjList[5].push_back(make_pair(0, 0));
     adjList[5].push_back(make_pair(2, 0));

     for (int i=0;i<adjList.size();i++){
          dfs_visited.push_back(false);
     }
     for (int i=0;i<adjList.size();i++){
          topoQ.push_back(false);
     }
     for (int i = 0; i < adjList.size(); i++) // this part is the same as finding CCs
          if (topoQ[i] == false) topoSort(i);
     for (int i=0;i<ts.size();i++){
          cout << ts[i]<<endl;

     }


}
