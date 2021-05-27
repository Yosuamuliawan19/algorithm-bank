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
#include<climits>
#include<set>
#include<queue>
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
#define FOR(i,a,b) for(int i=a;i<b;i++)
int tc, n, m, a, b, c, lim ;
vector<pair<int,int> > locs;
int memo[15][100000];
int dist[15][15];
double caldist(int a, int b){
	pair<int,int> x = locs[a], y = locs[b];
	return (abs(x.fi-y.fi) + abs(x.se-y.se));
}
int tsp (int pos, int mask){
	if (mask == lim){
		return dist[pos][0];
	}
	if (memo[pos][mask] != -1) return memo[pos][mask];
	int ans = INT_MAX;
	for (int city=0;city<c;city++){
		if ((mask&(1<<city)) == 0){
			ans = min(ans, dist[pos][city] + tsp(city, mask|(1<<city)));
		}
	}
	return memo[pos][mask] = ans;
}

int main(int argc, char const *argv[])
{
	cin >> tc;
	while (tc--){
		locs.clear();
		memset(dist,0, sizeof(dist));
		FOR(i,0,15)FOR(j,0,100000)memo[i][j] =-1;
		cin >> n >> m >> a >> b;
		locs.pb(mp(a,b));
		cin >> c;

		for (int i=1;i<=c;i++){
			cin >> a >> b;
			locs.pb(mp(a,b));
			for (int j=0;j<i;j++){
				dist[i][j] = dist[j][i] = caldist(i,j);
			}
		}
		c++;
		lim = (1<<c) - 1;
		// for (int i=0;i<c;i++){
		// 	for (int j=0;j<c;j++){
		// 		cout << dist[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << "The shortest path has length " <<  tsp(0,1) << endl;
	}

	return 0;
}
