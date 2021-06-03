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
	int n , m ; 
	cin >>  n >> m;
	int mat[51][51] = {0};
	int mulrow[51] = {0};
	int mulcol[51] = {0};
	fill (mulrow, mulrow + 51 , 0);
	fill (mulcol, mulcol + 51 , 0);

	for (int i = 0; i < n; ++i)
	{
		for (int i1 = 0; i1 < m ; i1 ++)
		{
			cin >> mat[i][i1];
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		string s;
		int k, val;
		cin >> s >> k >> val;
		if (s == "row"){
			mulrow[k-1] += val; 
		}else{
			mulcol[k-1] += val; 
		}
	}
	LL sum = 0;
	int max = mat[0][0] + mulrow[0] + mulcol[0];
	int min = mat[0][0] + mulrow[0] + mulcol[0];
	for (int i = 0; i < n; ++i)
	{
		for (int i1 = 0; i1 < m; ++i1)
		{
		//	cout << mat[i][i1] << " ";
			int cur = mat[i][i1] + mulrow[i] + mulcol[i1];
			sum += cur;
			if (cur > max){
				max = cur;
			}else if (cur < min){
				min = cur;
			}
		}
		//cout << endl;
	}

	cout << sum<< " " << min << " " << max << endl;
	return 0;
}