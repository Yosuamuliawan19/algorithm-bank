#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

typedef long long ll;
using namespace std;
vector<vector<ll> > adjList;
vector<ll> init;
vector<ll> goals;

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
	dfs(0);
	printf("%lld\n", cnt);
	while (!res.empty()){
		printf("%lld\n", res.front());
		res.pop();
	}

	return 0;
}
