ll tc,n,m,a,b,c,sx,ex;
vector<pair<ll,ll> > adj[10100];
ll dist[10100];
dist[sx-1] = 0;
for (int i=0;i<n-1;i++){
     for (int u=0;u<n;u++){
          for (int k=0;k<adj[u].size();k++){
               int v = adj[u][k].fi;
               int w = adj[u][k].se;
               if (dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
               }
          }
     }
}
for (int u=0;u<n;u++){
     for (int k=0;k<adj[u].size();k++){
          int v = adj[u][k].fi;
          int w = adj[u][k].se;
          if (dist[v] > dist[u] + w){
               // negative cycle found
          }
     }
}
