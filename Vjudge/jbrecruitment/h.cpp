#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	long double x;
	long double res;
	for (int i = 1; i <= tc; ++i)
	{
		cin >> x;
		res = ((pow(x, 5.0) + 1)/(x+1));
		cout << fixed << setprecision(0);
		cout << "Kasus #"<< i << ": " <<res << endl;
		

	}
	
}