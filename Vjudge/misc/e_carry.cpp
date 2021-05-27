#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned int x,y;
	while (cin >> x >> y){
		cout << (x ^ y) << endl;
	}
	return 0;
}