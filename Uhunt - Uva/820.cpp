#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<climits>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)


vector<ll> parent;
ll n,s,t,c;
ll mat[110][110];
ll res[110][110] = {0};
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
	for (ll i=0;i<n;i++) for(ll j=0;j<n;j++) res[i][j] = mat[i][j];
	parent = vector<ll>(n,0);
	ll tot = 0;
	while (bfs()){
		ll pf = LLONG_MAX;
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			pf = min(res[j][i], pf);
		}
		// cout << pf << endl;
		for (ll i=t;i!=s;i=parent[i]){
			ll j = parent[i];
			res[j][i] -= pf;
			res[i][j] += pf;
		}
		tot += pf;
	}
	return tot;
}
int main(int argc, char const *argv[])
{
	ll tc = 1;
	while (cin >> n){
		if (!n) break;
		memset(mat,0,sizeof(mat));
		cin >> s >> t >> c;
		// cout << s << " " << t << " " << c << endl;
		s--;t--;
		ll a,b,f;
		for (ll i=0;i<c;i++){
			cin >> a >> b >> f;
			mat[a-1][b-1] += f;
			mat[b-1][a-1] += f;
 		}
		// for (int i=0;i<n;i++){
		// 	for (int j=0;j<n;j++){
		// 		cout << mat[i][j] << " ";
		// 	}cout <<"\n";
		// }
		cout << "Network " << tc++ << endl;
		cout << "The bandwidth is " <<  maxflow() <<".\n\n";
		// for (int i=0;i<n;i++){
		// 	for (int j=0;j<n;j++){
		// 		cout << res[i][j] << " ";
		// 	}cout <<"\n";
		// }
	}
	return 0;
}
