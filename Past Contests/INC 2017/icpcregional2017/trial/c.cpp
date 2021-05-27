#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int minim = 10000001;
vector < vector < pair < int, int > > >  adjlist;
vector < int > visits;
int findRoot(int a, int b, int sum){
	visits[a] = 1;
	if (a == b){
		if (sum < minim){
			minim = sum;
		}
		return 0;
	}
	for (int i = 0; i < adjlist[a].size(); ++i)
	{
		if (visits[adjlist[a][i].first] == 0) findRoot(adjlist[a][i].first, b ,sum + adjlist[a][i].second);
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	
	int n , m , a , b;
	cin >> n >> m >> a >> b;
	for (int i = 0; i < n ; ++i)
	{
		adjlist.push_back(vector<pair < int , int > >());
		visits.push_back(0);
	}
	for (int i = 0; i < m; ++i)
	{
		int u , v , w;
		cin >> u >> v >> w;
		adjlist[u].push_back(make_pair(v,w));
		adjlist[b].push_back(make_pair(u,w));
	}
	
	// parents and distance;
	findRoot(a, b, 0);
	cout << minim << endl;

	return 0;
}