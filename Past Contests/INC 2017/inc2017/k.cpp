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
	int arr[100001] = {0};
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> arr[i];
	}
	sort(arr, arr+n);
	if (n == 2){
		cout << arr[n-1] - arr[0]<<endl;
	}else if (n == 3){
		for (int i = 0; i < n-1; ++i)
		{
			if (arr[i] - arr[0] > arr[n-1] - arr[i] ){
				cout << arr[i] << endl;
			}
		}
	}
	return 0;
}