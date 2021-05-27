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
	long long  n, m , a;
	cin >> n >> m  >> a ;

	long long res = n / a + ((n % a == 0) ? 0 : 1);
	res *= ( m / a + ((m % a == 0) ? 0 : 1));
	cout << res << endl;
	return 0;
}