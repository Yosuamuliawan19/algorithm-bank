// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int n, s, t, c, a, b, x, tc = 1;
ll  mat[110][110], res[110][110]; // residual graph
bool vis[110]; // vis for the bfs
int parent[110] = {0};
bool bfs(int s, int t){
	// reseting vis
	for (int i=0;i<110;i++) vis[i] = 0;

	queue<int> q;
	q.push(s);
	vis[s] = 1;
	parent[s] = -1;

	while (!q.empty()){
		int cur = q.front(); q.pop();
		for (int i=1;i<=n;i++){
			if (res[cur][i] > 0 && !vis[i]){
				vis[i] = 1;
				parent[i] = cur; // to store the path
				q.push(i);
			}
		}
	}
	return vis[t];
}
int maxflow(int s, int t){
	for (int i=0;i<110;i++) for (int j=0;j<110;j++) res[i][j] = mat[i][j];
	for (int i=0;i<110;i++) parent[i] = 0;
 	ll mf = 0;
	while (bfs(s, t)){
		ll pf = LLONG_MAX;
		// find the bottle neck along the route
		for (int i=t;i!=s;i=parent[i]){
			int j = parent[i];
			pf = min(pf, res[j][i]);
		}
		// substract the pathflow in the path
		for (int i=t;i!=s;i=parent[i]){
			int j = parent[i];
			res[j][i] -= pf;
			res[i][j] += pf;
		}
		// add to the total flow
		mf += pf;
	}
	return mf;
}
int main()
{
	while (scanf("%d", &n) == 1){
		if (!n) break;
		scanf("%d%d%d",&s,&t,&c);
		// reseting the array
		for (int i=0;i<110;i++){
			for (int j=0;j<110;j++){
				res[i][j] = 0;
				mat[i][j] = 0;
			}
		}
		// input
		for (int i=0;i<c;i++){
			scanf("%d%d%d",&a,&b,&x);
			mat[a][b] += x;
			mat[b][a] += x;
		}
		ll mf = maxflow(s, t);
		printf("Network %d\n", tc++);
		printf("The bandwidth is %lld.\n\n", mf);
	}



	return 0;
}
