// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
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
ll n, m, a, b;
ll cost[550][550];
char arr[550][550];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
ll c[2];
int main()
{
	cin >> m >> n >> c[0] >> c[1];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> arr[i][j];
			cost[i][j] = -1;
		}
	}
	queue<pair<bool, pair<ll,ll> > > q;
	q.push(mp(1,mp(0,0)));
	cost[0][0] = a;
	while (!q.empty()){
		pair<bool, pair<ll,ll> > cur = q.front(); q.pop();
		ll x = cur.se.fi, y = cur.se.se;
		bool state = cur.fi;
		for (int i=0;i<4;i++){
			ll a = x+dx[i], b = y+dy[i];
			if (a >=0 && a < n && b >= 0 && b < m && arr[a][b] != '#' &&
			(cost[a][b] == -1|| cost[a][b] > cost[x][y] + c[state])
			){
				cost[a][b] = cost[x][y] + c[state];
				q.push(mp(!state, mp(a,b)));
			}
		}
	}
	// for (int i=0;i<n;i++){
	// 	for (int j=0;j<m;j++){
	// 		cout << cost[i][j] << " ";
	// 	}cout << endl;
	// }
	if (cost[n-1][m-1] == -1){
		cout << "IMPOSSIBLE\n";
	}else{
		cout << cost[n-1][m-1] <<endl;
	}
	return 0;
}
