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
	long double max = - 1,min =2000000001 ,sum = 0;
	for (int i = 0; i < n; ++i)
	{
		double a, b;
		cin >> a >> b;
		double res = a / b;
	//	cout << res << endl;
		sum += res;
		if (res < min){
			min = res;
		}
		if (res > max){
			max = res;
		}
	}
	cout << fixed << setprecision(11) << min << " " << max << " " << sum << endl;
	return 0;
}