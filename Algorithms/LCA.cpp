//node 1-based
int n, dep[N+5], t[25][N+5], pangkat[25];
vi adj[N+5];
// to find parent and dep
void dfs(int u, int par, int d){
	dep[u] = d;
	t[0][u] = par;
	for(auto v: adj[u]){
		if(v==par) continue;
		dfs(v, u, d+1);
	}
}
void build(){
	pangkat[0]=1;
	for(int i=1;i<=20;i++) pangkat[i] = pangkat[i-1]*2;
	for(int i=1;i<=20;i++){
		for(int j=1;j<=n;j++){
			t[i][j] = t[i-1][t[i-1][j]];
		}
	}
}
int lca(int a, int b){
	if(dep[a] < dep[b]) swap(a,b);
	int selisih = dep[a]-dep[b];
	//naikin a supaya sejajar dengan b
	for(int i=20;i>=0;i--){
		if(selisih>=pangkat[i]){
			selisih -= pangkat[i];
			a = t[i][a];
		}
	}
	//kalau udah sama langsung return
	if(a==b) return a;
	//naikin a dan b
	for(int i=20;i>=0;i--){
		if(t[i][a] != t[i][b]){
			a = t[i][a];
			b = t[i][b];
		}
	}
	return t[0][a];
}
dfs(1,0,0);
//build the sparse table
build();
