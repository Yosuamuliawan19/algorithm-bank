#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string x;
	cin >> x;
	int m = 0;
	int h = 0;

	m =  x[x.length()-1] - 48;
	m += (x[x.length() -2] -48) * 10;
	cout << m;






	return 0;
}