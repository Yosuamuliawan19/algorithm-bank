#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

typedef long long ll;
using namespace std;
vector<vector<ll> > adjList;
vector<ll> init;
vector<ll> goals;
vector<bool> vis2;

int flip (int x){
	if (x == 0 ){
		return 1;
	}else return 0;
}
void dfs (ll x, bool isFlip){
	vis2[x] = true;
	if (isFlip) init[x] = flip(init[x]);
	for (ll i=0;i<adjList[x].size();i++){
		ll cur = adjList[x][i];
		if (!vis2[cur])
		dfs(cur, !isFlip);
	}
}

int main (){
	ll n, x, y;
	scanf("%lld", &n);
	adjList = vector<vector<ll> >(n, vector<ll>());
	for (ll i=0;i<n-1;i++){
		scanf("%lld %lld", &x, &y);
		adjList[x-1].push_back(y-1);
		adjList[y-1].push_back(x-1);

	}
	
	for (ll i=0;i<n;i++){
		scanf("%lld", &x);
		init.push_back(x);
	}
	for (ll i=0;i<n;i++){
		scanf("%lld", &x);
		goals.push_back(x);
	}
	ll cnt = 0;
	queue<ll> res;
	queue<ll> q;
	q.push(0);
	vector<bool> vis(n,false);
	while (!q.empty()){
		ll cur = q.front();q.pop();
		// cout << "processing " << cur + 1<< endl;
		vis[cur] = true;
		for (ll i=0;i<adjList[cur].size();i++){
			ll pro = adjList[cur][i];
			if (!vis[pro])
			q.push(pro);
		}
		if (goals[cur] != init[cur]){
			cnt ++ ;
			res.push(cur+1);
			vis2 = vis;
			dfs(cur, true);
		}
	}
	printf("%lld\n", cnt);
	while (!res.empty()){
		printf("%lld\n", res.front());
		res.pop();
	}
	
	return 0;
}