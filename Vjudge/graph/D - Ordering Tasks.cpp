#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

class Vertex{
public:
     bool vis = false;
     vector<int> adj;
     void reset(){
          vis = false;
          adj.clear();
     }
}graph[110];

vector<int> res;
int n, m, a, b;

void topoSort(int cur){
     graph[cur].vis = true;
     for (int i=0;i<graph[cur].adj.size();i++){
          int next = graph[cur].adj[i];
          if (!graph[next].vis) topoSort(next);
     }
     res.pb(cur);
}

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     while (cin >> n >> m){
          if (n == 0 && m == 0) break;
          res.clear();
          for (int i=0;i<n;i++) graph[i].reset();
          for (int i=0;i<m;i++){
               cin >> a >> b; a--; b --;
               graph[a].adj.pb(b);
          }
          for (int i=0;i<n;i++){
               if (!graph[i].vis) topoSort(i);
          }
          for (int i=n-1;i>=0;i--){
               cout << res[i]+1 <<  " ";
          } cout << "\n";

     }
     return 0;
}
