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
	double pi = acos(-1);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int l;
		cin >> l;
		double red = pi * ((double) l / 5.0) *  ((double) l / 5.0);
		double green = (l * l * 0.6)  - red;
		cout << fixed << setprecision(2) << red << " " << green << endl;
	}
	return 0;
}