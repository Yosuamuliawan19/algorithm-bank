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
	int a = 0 , b = 0, c = 0;
	for (int i = 0; i < n; ++i)
	{
		int x , y, z;
		cin >> x >> y >> z;
		a += x;
		b += y;
		c += z;

	}
	if (a == 0 && b == 0 && c == 0){
		cout << "YES" << endl;
	}else{
			cout << "NO" << endl;
	}
	return 0;
}