#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[100] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int y;
		cin >> y;
		arr[i] = y;
	}
	sort(arr,arr+n);
	int max = arr[n-1];
	int arr2[100] = {};
	int count = 0;
	for (int i = n - 2; i >= 0; i--)
	{
		if ((max + arr[i]) % 2 == 1){
			max += arr[i];
		}else{
			arr2[count] = arr[i];
			count ++;
		}
	}
	for (int i = 0; i < count / 3; i++)
	{

		max+= arr[i*3] + arr[i*3 + 1] + arr[i*3 + 2];

	}
	cout << max << endl;
	return 0;
}