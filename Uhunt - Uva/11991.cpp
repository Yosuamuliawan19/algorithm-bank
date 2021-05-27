#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, m;
	map<int, vector<int> > loc;
	int arr[1000001] = {0};
	while (cin >> n >> m){
		for (int i = 1; i <= n; ++i)
		{
			int temp;
			cin >> temp;
			loc[temp].push_back(i);
			arr[temp] ++;
		}
		for (int i = 0; i < m; ++i)
		{
			int k, v;
			cin >> k >> v;
			if (arr[v] == 0 || arr[v] < k){
				cout << "0" << endl;
			}else {
				cout << loc[v][k - 1] << endl;
			}	
		}
	}
	
	return 0;
}