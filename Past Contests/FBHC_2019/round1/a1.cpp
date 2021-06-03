#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, m;
class Edge{
public:
     ll x, y, w;
};
vector<Edge> graph;
ll parent[60];
ll dist[60];
vector<pair<ll,ll> > adj[60];

bool custom(Edge x, Edge y){ return x.w < y.w; }
int findParent(int x){ return (parent[x] == x ? x : findParent(parent[x])); }
bool sameSet(int x, int y){ return findParent(x) == findParent(y);}
void unify(int x, int y){
     int a = findParent(x), b = findParent(y);
     if (a != b){
          if (a > b)  {
               parent[a] = b;
          }else{
               parent[b] = a;
          }
     }
}
ll dijkstra(ll x, ll y){
     priority_queue<pair<ll,ll> > pq;
     for (int i=0;i<n;i++) dist[i] = LLONG_MAX;
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
void link(int x, int y, int w){
     adj[x].pb(mp(w, y));
     adj[y].pb(mp(w, x));
     // cout << "Current adj list" << endl;
     // for (int i=0;i<n;i++){
     //      for (int j=0;j<adj[i].size();j++){
     //           cout << i+1<< " " << adj[i][j].se+1 << " " << adj[i][j].fi<< endl;
     //      }
     // }
     // cout << "end \n";
}
void reset(){
     graph.clear();
     for (int i=0;i<n;i++){
          parent[i] = i;

          adj[i].clear();
     }
}
void input(){
     cin >> n >> m;
     reset();
     for (int i=0;i<m;i++){
          Edge in;
          cin >> in.x >> in.y >> in.w;
          in.x--; in.y--;
          graph.pb(in);
     }
}
void solve(int t){
     for (auto cur: graph){
          if (sameSet(cur.x, cur.y)){
               ll sp = dijkstra(cur.x, cur.y);
               // cout << "SP : " << sp << " (" << cur.x+1 << " -> " << cur.y +1<< ") w = "<< cur.w <<"\n";
               if (sp < cur.w){
                    cout << "Case #" << t << ": Impossible\n";
                    return;
               }
          }
          unify(cur.x, cur.y);
          link(cur.x, cur.y, cur.w);
     }

     set<pair<ll, pair<ll,ll> > > st;
     for (int i=0;i<n;i++){
          for (int j=0;j<adj[i].size();j++){
               if (i > adj[i][j].se){
                    st.insert(mp(i+1, mp(adj[i][j].se+1, adj[i][j].fi)));
               }else{
                    st.insert(mp(adj[i][j].se+1, mp(i+1, adj[i][j].fi)));
               }
          }
     }

     cout << "Case #" << t << ": " <<st.size() <<"\n";
     for (auto cur : st){
          cout << cur.fi << " "<< cur.se.fi << " "<< cur.se.se << endl;
     }
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     cin >> tc;
     for (int t=1;t<=tc;t++){
          input();
          sort(graph.begin(), graph.end(), custom);
          // if (t == 4){
          //      for (int i=0;i<graph.size();i++){
          //           cout << graph[i].x +1<< " " << graph[i].y+1 << " " << graph[i].w << endl;
          //      }
          // }

          solve(t);
          // cout << "-----\n";
     }

     return 0;
}
