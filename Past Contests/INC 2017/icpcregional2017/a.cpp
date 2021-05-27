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
int main(int argc, char const *argv[])
{
	int n , m;
	cin >> n >> m;
	vector <int> v;
	for (int i = 0; i < m; ++i)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	vector <int> t;
	for (int i = 0; i < n; ++i)
	{
		t.push_back(0);
		for (int i1 = 0; i1 < m; ++i1)
		{
			int temp;
			cin >> temp;
			if (v[i1] == temp){
				t[i] ++;
			}
		}
	}
	int max = -1, win = -1;
	for (int i = 0; i < n; ++i)
	{	
		if (t[i] > max){
			max = t[i];
			win = i;
		}
	}
	cout << win + 1 << endl;
	return 0;
}