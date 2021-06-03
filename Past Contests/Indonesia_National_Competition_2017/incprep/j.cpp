#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for (int i = 0; i < tc; ++i)
	{
		int n;
		cin >> n;
		long long res = 0;
		for( int i = 1; i <= n; i=i+1 )
		{
			res = (res + n/i);
		} 
		cout <<res<<endl;
	}
	return 0;
}