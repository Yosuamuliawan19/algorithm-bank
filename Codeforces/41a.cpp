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
	string a , b , c;
	cin >> a >> b;
	for (int i = b.length() - 1; i >= 0; i--)
	{
		c += b[i];
	}
	if (c == a){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}