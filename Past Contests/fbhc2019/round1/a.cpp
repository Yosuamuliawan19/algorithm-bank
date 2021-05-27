#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// typedef long long int;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

ll tc, n, m;
ll a, b, c;

class Edge{
public:
     ll x, y, w;
};
vector<Edge> graph;
vector<pair<ll,ll> > adj[55];
vector<ll> parent;

bool custom(Edge x, Edge y){
     return x.w < y.w;
}

int findParent(int x) {
     return (parent[x] == x ? x : findParent(parent[x]));
}
void unify(int x, int y){
     int a = findParent(x), b = findParent(y);
     if (a != b){
          if (a > b) {
               parent[a] = b;
          }else{
               parent[b] = a;
          }
     }
}
bool sameSet(int x, int y){
     return findParent(x) == findParent(y);
}
void link(int x, int y, int w){
     adj[x].pb(mp(w, y));
     adj[y].pb(mp(w, x));
}
int dijkstra(int x, int y){
     vector<ll> dist = vector<ll>(n, LLONG_MAX);
     priority_queue<pair<ll,ll> > pq;
     dist[x] = 0;
     pq.push(mp(0, x));
     while (!pq.empty()){
          pair<ll,ll> cur = pq.top(); pq.pop();
          ll node = cur.se;
          for (int i=0;i<adj[node].size();i++){
               ll next = adj[node][i].se, nextdist = adj[node][i].fi;
               if (dist[next] > dist[node] + nextdist ){
                    dist[next] = dist[node] + nextdist;
                    pq.push(mp(dist[next], next));
               }
          }
     }
     return dist[y];
}
void solve(int t){
     for (auto cur: graph){
          cout << cur.w << endl;
          if (sameSet(cur.x, cur.y)){
               int sp = dijkstra(cur.x, cur.y);
               if (sp < cur.w){
                    cout << "SP : " << sp << " (" << cur.x << " -> " << cur.y << ") w ="<< cur.w <<"\n";
                    cout << "Case #" << t << ": Impossible\n";
                    return;
               }
          }
          unify(cur.x, cur.y);
          link(cur.x, cur.y, cur.w);
     }
     cout << "Case #" << t << ": \n";
     for (int i=0;i<n;i++){
          for (int j=0;j<adj[i].size();j++){
               cout << i << " " << adj[i][j].se << " " << adj[i][j].fi << endl;
          }
     }
}


int main (){
     cin >> tc;
     // cout << tc << endl;
     for (int t=0;t<tc;t++){
          cin >> n >> m;
          // reset inputsss
          graph.clear();
          parent = vector<ll>(n);
          for (int i=0;i<n;i++) {
               parent[i] = i;
               adj[i].clear();
          }
          // get new inputs
          for (int i=0;i<m;i++){
               Edge cur;
               cin >> cur.x >> cur.y >> cur.w;
               graph.pb(cur);
               // cout << graph[i].x << graph[i].y << graph[i].w << endl;
          }
          sort(graph.begin(), graph.end(), custom);
          // begin of solving

          solve(t+1);
          cout << "---\n";
     }
     return 0;
}
