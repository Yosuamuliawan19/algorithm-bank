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
	int n;
	cin >> n;
	int m;
	cin >> m;
	int arr[1001] = {};
	for (int i = 0; i < m; ++i)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}
	sort(arr,arr+m);
	int min = 99999999;
	for (int i = 0; i < m - n + 1; ++i)
	{
		int temp = arr[i + n - 1]  - arr[i];
		//cout << temp << endl;
		if (temp < min){
			min = temp;
		}
	}
	cout << min << endl;

	return 0;
}