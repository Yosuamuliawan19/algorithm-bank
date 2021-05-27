queue<pair<ll, ll > > pq;
vector<pair<ll,ll> > adj[10100];
ll dist[10100];

pq.push(mp(0, sx-1));
dist[sx-1] = 0;
while (!pq.empty()){
     pair<ll,ll> cur = pq.front(); pq.pop();
     ll u = cur.se, dis = cur.fi;
     // cout << u << " " << dis << endl;
     for (ll i=0;i<adj[u].size();i++){
          ll v = adj[u][i].fi, w = adj[u][i].se;
          if (dist[v] > dist[u] + w){
               dist[v] = dist[u] + w;
               pq.push(mp(dist[v], v));
          }
     }
}
