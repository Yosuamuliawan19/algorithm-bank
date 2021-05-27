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
	long long tot = 0;
	for (int i = 0; i < n; ++i)
	{
		long long p, q;
		cin >> p >> q;
		if (q - p >= 2){
			tot ++;
		}
	}
	cout << tot << endl;
	return 0;
}