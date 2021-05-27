#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , x ;
	cin >> n >> x;
	int arr[101] = {}	;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}
	sort(arr, arr + n);
	int count = 0;
	for (int i = 0; i < x; ++i)
	{
		bool flag = false;
		for (int i1 = 0; i1 < n; ++i1)
		{
			if( arr[i1] == i){
				flag = true;
				break;
			}
		}
		if (!flag) {
			count ++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == x){
			count ++;
			break;
		}
	}
	cout << count << endl;
	return 0;
}