bool bfs(){
	bool vis[110];
	memset(vis,0,sizeof(vis));
	queue<ll> q;
	q.push(s);
	vis[s] = 1;
	parent[s] = -1;
	while(!q.empty()){
		ll cur = q.front();q.pop();
		for (ll i=0;i<n;i++){
			if(!vis[i] && res[cur][i] > 0){
				vis[i] = 1;
				q.push(i);
				parent[i] = cur;
			}
		}
	}
	return vis[t];
}
ll maxflow(){
	// copy residual graph from adj matrix
	for (ll i=0;i<n;i++) for(ll j=0;j<n;j++) res[i][j] = mat[i][j];
	parent = vector<ll>(n,0);
	ll tot = 0;
	// while there is still a path to the sink
	while (bfs()){
		ll pf = LLONG_MAX;
		// find the minimum flow in the path
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			pf = min(res[j][i], pf);
		}
		// augment the flow in the path
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			res[j][i] -= pf;
			res[i][j] += pf;
		}
		tot += pf;
	}
	return tot;
}
// min cut, all non reachable from reachable
for (int i=0;<v;i++){
	for(int j=0;j<v;j++){
		if (vis[i] && !vis[j]  && graph[i][j]) // cut;
	}
}
