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
	int a = 0 , b = 0 , c = 0;
	for (int i = 0; i < n; ++i)
	{
		string x;
		cin >> x;
		if (x.length() == 4){
			a ++;
		}else if (x.length() == 5){
			b++;
		}else if (x.length() == 6){
			c++;
		}
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}