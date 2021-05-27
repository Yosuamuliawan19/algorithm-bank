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
	
	const int max = 5000;
	bool arr[max] = {1};
	int tc; 
	cin >> tc;
	for (int i = 0; i < max; ++i)
	{
		arr[i] = true;
	}
	
	for (int i = 2; i < max; ++i)
	{
		if (arr[i] == false){
			continue;
		}
		for (int i1	= i * 2; i1 < max ; i1 += i)
		{
			
			arr[i1] = false;
		}
	}
	
	for (int i = 0; i < tc; ++i)
	{
		int x , y;
		cin >> x >> y; 
		x += y;
		for (int i = x + 1; i < max; ++i)
		{
			if (arr[i]){
				cout << i - x << endl;
				break;
			}
		}
	}
	
	return 0;
}