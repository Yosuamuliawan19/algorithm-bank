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
int trees = 0;
void makeTree(int head, int prevcost){
	//cout << "head " << head << endl;
	int child = 0;
	
	for (int i = 0; i < make; ++i)
	{
		if (!list[i][3]) continue;
		//cout <<"considering "<< list[i][1] << endl;
		if (head == list[i][0] && prevcost < list[i][2] && list[i][3]){
			child ++ ;
			list[i][3] = 0;
			edge ++;
			//cout << "child " << child << " " << list[i][1] << endl;
			makeTree(list[i][1], list[i][2]);
		}
		if (child == m) break;
	}
}
int main(int argc, char const *argv[])
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		int u , v , w;
		cin >> u >> v >> w;
		list.push_back(vector <int>());
		list[i].push_back(u);
		list[i].push_back(v);
		list[i].push_back(w);
		list[i].push_back(1);
		table[u].push_back(make_pair(v , w));
	}
	sort(list.begin(), list.end(), func);
	
	for (int i = 0; i < n; ++i)
	{
		if (list[i][3]){
			makeTree(list[i][0],0);
			trees+=1;
			//cout << " end of tree " << endl;
		}
	}
	cout << trees << endl;

	return 0;

}