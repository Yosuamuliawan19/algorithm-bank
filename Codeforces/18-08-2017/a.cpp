#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k;
	char w[n];
	cin >> w;

	int arr[26];
	memset(arr,0,sizeof(arr));
	for (int i = 0; i < n; ++i)
	{
		//cout << w[i] - 97 << "hahaha" <<endl;
		arr[w[i] - 97] ++;
	}
	bool f = true;
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] > k){
			f = false;
		}
	}
	if (f){
		cout << "YES"<<endl;

	}else{cout<< "NO" << endl;}

	return 0;
}
