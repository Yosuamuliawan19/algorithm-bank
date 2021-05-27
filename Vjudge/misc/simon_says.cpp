#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	cin.ignore();
	for (int i = 0; i < x; ++i)
	{
		string y;
		getline(cin,y);
		if (y.substr(0,10) == "Simon says"){
			cout << y.substr(11, y.length() - 10) << endl;
		}
	}
	return 0;
}