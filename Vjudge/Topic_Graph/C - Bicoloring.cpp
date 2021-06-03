#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;
class Vertex{
public:
     int color = -1;
     vector<int> adj;
     void reset(){
          color = -1;
          adj.clear();
     }
};
bool suc;
Vertex graph[210];
int n, m,  a, b;
void bicolor(int cur, int color){
     if (!suc) return;
     graph[cur].color = color;
     int nextColour = (color == 1 ? 2 : 1);
     for (int i=0;i<graph[cur].adj.size();i++){
          int next = graph[cur].adj[i];
          if (graph[next].color == color){
               suc = false;
               return;
          }else if (graph[next].color == -1){
               bicolor(next, nextColour);
          }
     }
}
int main (){
     while (cin >> n >> m){
          suc = true;
          for (int i=0;i<m;i++){
               cin >> a >> b;
               graph[a].adj.pb(b);
               graph[b].adj.pb(a);
          }
          bicolor(0, 1);
          for (int i=0;i<n;i++){
               graph[i].reset();
          }
          if (!suc){
               cout << "NOT BICOLORABLE.\n";
          }else{
               cout << "BICOLORABLE.\n";
          }
     }
     return 0;
}
