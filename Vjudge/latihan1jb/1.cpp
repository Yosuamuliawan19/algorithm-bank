#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;

	if (x % 2 != 0 || x==2) cout << "NO"<<endl;
	else {cout << "YES" << endl;}
	return 0;
}