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
	long long k , n , w;
	cin >> k >> n >> w;
	long long tot = 0;
	for (int i = 1; i <= w; ++i)
	{
		tot += k * i;
	}
	//cout << tot << endl;
	cout << ((tot - n <= 0) ? 0 : tot - n )<< endl;
	return 0;
}