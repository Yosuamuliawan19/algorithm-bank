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
vector< int > econ;
vector < vector < int > > map;
long minim = 1000000001;
int x;
int a , b , c;
void findCity2(int cur, int start, int comp){
	if (cur == x){
		if (econ[comp] - econ[cur] < minim){
			minim = econ[comp] - econ[cur];
		}
	}
	for (int i = 0; i < map[start].size(); ++i)
	{
		findCity2( cur + 1 , map[start][i], comp);
	}
}
void findCity1( int cur , int start){
	if (cur == x){
		findCity2(0,c,cur);
	}
	for (int i = 0; i < map[start].size(); ++i)
	{
		findCity1( cur + 1 , map[start][i]);
	}
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		econ.push_back(temp);
	}
	map.assign(n, vector<int>());
	for (int i = 0; i < m; ++i)
	{
		int u , v;
		cin >> u >> v ;
		map[u].push_back(v);
		map[v].push_back(u);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		
		cin >> a >> b >> c;
		if (a == 1){
			for (int i = 0; i < n; ++i)
			{
				x = i;
				cout << "test" << endl;
				findCity1(0,b)	;
			}
		}else if (a == 0){
			econ[b] = c;
		}
	}
	cout << minim << endl;

	
	return 0;
}