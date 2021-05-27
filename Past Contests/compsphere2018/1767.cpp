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
pair<int,pair<int,int> > memo[3000][3000];
int sz[3000], val[3000];
int s, n;
int knap(int cap, int idx){
     if (idx > n || cap <= 0) return 0;
     if (memo[cap][idx].fi != -1) return memo[cap][idx];


     if (cap-sz[idx] >= 0){
		int curval = max(val[idx] + knap(cap-sz[idx], idx+1) , knap(cap,idx+1));

	}
     else {
		memo[cap][idx] = mp(knap(cap, idx+1),mp(cap,)
	}



	return memo[cap][idx] = cur;
}
int main()
{
     int tc;
	cin >> tc;
	while (tc--){
		cin >> n;

		for (int i=0;i<n;i++){
			cin >> val[i] >> sz[i];
		}
	 	int ans = knap(50, 0);
		printf("%d brinquedos\n", ans.fi);
		printf("Peso: %d kg\n", ans.se.fi);
		printf("sobra(m) %d pacote(s)\n", ans.se.se);
	}


	return 0;
}
