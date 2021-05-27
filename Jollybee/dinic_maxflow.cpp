// dinic
ll level[110], res[110][110] = {0};
bool vis[110];
bool bfs(){
     // reset vis and level
     memset(vis, 0, sizeof(vis));
     memset(level, 0, sizeof(level));
     // queue with current node and level
     queue<pair<int,int> > q;
     q.push(mp(s,0));
     vis[s] = 1;
     while (!q.empty()){
          pair<int,int> p = q.front(); q.pop();
          ll cur = p.fi, lvl = p.se;
          for (int i=0;i<n;i++){
               if (res[cur][i] > 0 && !vis[i]){
                    vis[i] = 1;
                    level[i] = lvl + 1;
                    q.push(mp(i, lvl+1));
               }
          }
     }
     return vis[t];
}
int dfs(int cur, int flow){
     if (!flow) return 0;
     if (cur == t) return flow;
     for (int i=0;i<n;i++){
          // if level is greater and still got flow
          if (level[cur] + 1 == level[i] && res[cur][i] > 0){
               int ret = dfs(i, min((ll)flow, res[cur][i]));
               if (ret > 0){
                    res[i][cur] += ret;
                    res[cur][i] -= ret;
                    return ret;
               }
          }
     }
     return 0;
}
ll maxflow(){
     ll mf = 0;
     // copy residual graph from adj matrix
     for (int i=0;i<110;i++){
          for (int j=0;j<110;j++){
               res[i][j] = mat[i][j];
          }
     }
     // while still can reach sink
     while (bfs()){
          // send flow
          while (int pf = dfs(s, INT_MAX)){
               mf += pf;
          }
     }
     return mf;
}
