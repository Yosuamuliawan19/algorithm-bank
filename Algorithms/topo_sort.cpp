vector<int> topo;
void dfs(int cur){
     for (int i=0;i<adj[cur].size();i++){
          int nxt = adj[cur][i];
          if (!vis[nxt]) {vis[nxt] = 1; dfs(nxt);}
     }
     topo.pb(cur);
}
vector<int> khans(vector<int> &indeg){
     for (int i=0;i<n;i++){
		if(indeg[i] == 0) q.push(i);
	}
	vector<int> ans;
	while (!q.empty()){
		int cur = q.top();q.pop();
		ans.pb(cur);
		for (int i=0;i<adjList[cur].size();i++){
			int nxt = adjList[cur][i];
			indeg[nxt] --;
			if (indeg[nxt] == 0){
				indeg[nxt] = -100;
				q.push(nxt);
			}
		}
	}
     return ans;
}
