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
#include<queue>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

vector<vector<int> > arr;
int rem(int x){
	for (int i=1;i<arr[x].size();i++){
		int cur = arr[x][i];
		arr[cur].push_back(cur);
	}
	int ret = arr[x][0];
	arr[x].clear();
	return ret;
}
int main(int argc, char const *argv[])
{
	int tc;
	string s;
	int n,a,b;
	cin >> n;
	arr = vector<vector<int> > (n, vector<int>());
	for (int i=0;i<n;i++){
		arr[i].push_back(i);
	}
	while (cin >> s){
		if (s == "move"){
			cin >> a >> s >> b;
			if (s == "onto"){
				int c= rem(a);
				int d= rem(b);
				arr[b].push_back(d);
				arr[b].push_back(c);
			}else{
				int c= rem(a);
				arr[b].push_back(c);
			}
		}else if (s == "pile"){
			cin >> a >> s >> b;
			if (s == "onto"){
				int c= rem(b);
				arr[b].push_back(c);
				for (int i=arr[a].size()-1;i>=0;i--){
					arr[b].push_back(arr[a][i]);
				}
				arr[a].clear();
			}else{
				for (int i=arr[a].size()-1;i>=0;i--){
					arr[b].push_back(arr[a][i]);
				}
			}
		}
	}
	for (int i=0;i<n;i++){
		cout << i << ":";
		for (int j=0;j<arr[i].size();j++){
			cout << " "<<  arr[i][j] ;
		}
		cout << endl;
	}


	return 0;
}
