#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	
	int arr[1001] = {0};
	int cur = 0;
	for (int i = 1; i <= 1000; ++i)
	{
		arr[cur] = 1;
		cur += i;
		
		if (cur >= n){
			int y = cur /n;
			cur -= n * y ;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (!arr[i]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" <<endl;

	return 0;
}