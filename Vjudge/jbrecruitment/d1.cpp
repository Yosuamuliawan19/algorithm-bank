#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for (int i1 = 0; i1< tc ; ++i1)
	{
		int x;
		cin >> x;
		long long arr[1000] = {};
		long long arr2[1000] = {};
		for (int i = 0; i < x; ++i)
		{
			int y;
			cin >> y;
			arr[i]  = y;
		}
		sort(arr, arr + x);
		for (int i = 0; i < x; ++i)
		{
			int y;
			cin >> y;
			arr2[i] = y;
		}
		sort(arr2, arr2 + x);
		cout << "Kasus #" << i1 +1 << ": "<< (arr[0] > arr2[0] ? arr[0] / arr2[0]: arr2[0] / arr[0])  << endl;
	}
	return 0;
}