#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int  n , m , q;
	cin >> n >> m >> q;
	int arr[500][500] = {};
	for (int i = 0; i < n; ++i)
	{
		for (int i1 = 0; i1 <  m; ++i1)
		{
			cin >> arr[i][i1];

		}
	}
	return 0;
}