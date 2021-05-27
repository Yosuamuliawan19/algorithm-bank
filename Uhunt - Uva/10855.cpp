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
	int b , s;
	int arrb[1000][1000];
	int arrs[1000][1000];
	while (cin >> b >> s){
		for (int i = 0; i < b; ++i)
		{
			string x;
			cin >> x;
			for (int i1 = 0; i1 < b ; i1 ++)
			{
				arrb[i][i1] = x[i1];
			}
		}
		for (int i = 0; i < s; ++i)
		{
			string x;
			cin >> x;
			for (int i1 = 0; i1 < s ; i1 ++)
			{
				arrs[i][i1] = x[i1];
			}
		}
		for (int i = 0; i < 4; ++i)
		{
			if (i != 0){
				
			}
		}
	}
	return 0;
}