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
vector < vector < int > > list;
vector < vector < pair < int, int > > > table; 
int n ,m;
bool func ( vector<int> &a , vector<int> &b){
	return a[2] < b[2];
}
int edge = 0;
void makeTree(int cur, int child, int curcost){
	cout << "child " << list[cur][0]<< endl;
	for (int i = cur + 1; i < table[cur].; ++i)
	{
		if (list[i][0] == list[cur][0] && list[i][2] > curcost && list[i][3]){
			cout <<" hahaha "<< endl;
			list[i][3] = 0;
			child ++;
			edge ++;

			makeTree(list[i][1], 0, list[i][3]);
		}
		if (child == m) break;
	}
}
int main(int argc, char const *argv[])
{

	
	cin >> n >> m;
	table.assign(vector < pair < int , int > > , 100001);
	for (int i = 0; i < n; ++i)
	{
		int u , v , w;
		cin >> u >> v >> w;
		list.push_back(vector <int>());
		list[i].push_back(u);
		list[i].push_back(v);
		list[i].push_back(w);
		list[i].push_back(1);

		


	}
	sort(list.begin(), list.end(), func);
	int trees = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (list[i][3]){
			makeTree(i,0,0);
			trees ++;
		}
	}
	cout << trees << endl;
	
	return 0;
}