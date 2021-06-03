#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main (){
     int n, a, b;
     cin >> n;
     vector<vector<int> > adjList(n, vector<int>());
     vector<int> dist(n, -1);
     for (int i=0;i<n-1;i++){
          cin >> a >> b;
          adjList[a-1].push_back(b-1);
          adjList[b-1].push_back(a-1);
     }
     queue<int> q;
     q.push(0);
     dist[0] = 0;
     int cur;
     while (!q.empty()){
          cur = q.front();q.pop();
          for (int i=0;i<adjList[cur].size();i++){
               int x = adjList[cur][i];
               if (dist[x] == -1){
                    q.push(x);
                    dist[x] = dist[cur] +1;
               }
          }
     }
     dist.clear(); dist = vector<int>(n,-1);
     dist[cur] = 0;
     q.push(cur);
     // cout << cur << endl;
     while (!q.empty()){
          cur = q.front();q.pop();
          for (int i=0;i<adjList[cur].size();i++){
               int x = adjList[cur][i];
               if (dist[x] == -1){
                    q.push(x);
                    dist[x] = dist[cur] +1;
               }
          }
     }
     cout << dist[cur] << endl;
     // for (int i=0;i<n;i++){
     //      cout << dist[i] << " ";
     // }
     // cout << endl;


     return 0;
}
