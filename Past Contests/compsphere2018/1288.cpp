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
ll tc,n,r,w[200],val[200],memo[1000][200],k;
ll knap (ll weight, ll idx){
	if (idx > n || weight <= 0) return 0;
	if (memo[weight][idx] != -1) return memo[weight][idx];
	if (weight-w[idx] >= 0){
		return memo[weight][idx] = max(val[idx] + knap(weight-w[idx], idx+1),knap(weight, idx+1));
	}else{
		return memo[weight][idx] = knap(weight, idx+1);
	}
}
int main()
{

	cin >> tc;
	while (tc--){
		memset(memo,-1,sizeof(memo));
		cin >> n;
		for (ll i=0;i<n;i++){
			cin >> val[i] >> w[i];
		}
		cin >> k >> r;
		ll ans = knap(k, 0);

		cout << ans <<  " " << r << endl;

		if (ans >= r){
			cout << "Missao completada com sucesso\n";
		}else{
			cout << "Falha na missao\n";
		}

	}


	return 0;
}
