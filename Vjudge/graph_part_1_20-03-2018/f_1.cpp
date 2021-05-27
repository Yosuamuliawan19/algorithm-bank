#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector < vector <int> > adjList;
queue <int> q;
vector <int> dist;
int n, far;
void bfs(int x){
     q.push(x);
     dist.clear();
     for (int i=0;i<n;i++){
          dist.push_back(-1);
     }
     dist[x] = 0;
     int cur;
     while (!q.empty()){
          cur = q.front(); q.pop();
          for (int i=0;i<adjList[cur].size();i++){
               int l = adjList[cur][i];
               if (dist[l] == -1){
                    q.push(l);
                    dist[l] = dist[cur] + 1;
               }
          }
     }
     far = cur;
}

using namespace std;
int main (){

     cin >> n;
     int a , b;
     for (int i=0;i<n;i++){
          adjList.push_back(vector<int>());
     }
     for (int i=0;i<n-1;i++){
          cin >> a >> b;
          adjList[a-1].push_back(b-1);
          adjList[b-1].push_back(a-1);
     }
     bfs(0);
     bfs(far);
     cout << dist[far] << endl;
}
