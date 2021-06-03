#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string x;
	cin >> x;
	string res = "";
	for (int i = 0; i < x.length(); ++i)
	{
		char y = x[i];
		if ( y < 97 ) y += 32;

		if (y == 'a' || y == 'o' || y == 'y' || y == 'e' || y == 'u' || y == 'i'){

		}else{
			res = res + '.' + y;
		}
	}
	cout << res << endl;
	return 0;
}