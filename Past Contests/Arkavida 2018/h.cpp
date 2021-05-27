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
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int len;
		cin >> len;
		int arr[len] = {};
		for (int j = 0; j < count; ++j)
		{
			cin >> arr[j];
		}
		int arr2[len] = {};
		int count = 0;



		for (int j = 0; j < len; ++j)
		{
			if (j == 0){ arr2[j] == arr[j]; count ++; }
			
			if (arr[j] == arr2[1]){
				
			}else{
				count ++;
				arr2[count] = arr[j];
			}
		}
	}
	return 0;
}