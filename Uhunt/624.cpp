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
int n, t;
vector < int > tracks;
int maxim = -1;
vector <int> bestpath;
void findMax(int trackno, int sum, vector <int> path){
	path.push_back(tracks[trackno]);
	sum+= tracks[trackno];
	if (sum > maxim || (sum == n && path.size() > bestpath.size())){
		maxim = sum;
		bestpath = path;
	}
	if (trackno == t) return ;
	for (int i = trackno + 1; i < t; ++i)
	{
		if (tracks[i] + sum <= n){
			findMax (i, sum , path);
		}
	}
}
int main(int argc, char const *argv[])
{
	
	while (cin >> n >> t){
		tracks.clear();
		maxim = -1;
		bestpath.clear();
		for (int i = 0; i < t; ++i)
		{
			int temp;
			cin >> temp;
			tracks.push_back(temp);
		}
		//sort(tracks.begin(), tracks.end());
		for (int i = 0; i < t; ++i)
		{
			findMax(i,0,vector <int>());
		}
		

		for (int i = 0; i < bestpath.size(); ++i)
		{
			cout << bestpath[i] << " " ;
		}
		cout << "sum:" << maxim << endl; 
	}
	return 0;
}