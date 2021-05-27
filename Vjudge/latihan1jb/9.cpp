#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin >> a >> b;
	int x = 2 * b /a;
	if (x * a  >= 2 * b) cout << x << endl;
	else {cout << 1 +(2 * b /a);}
	return 0;
}