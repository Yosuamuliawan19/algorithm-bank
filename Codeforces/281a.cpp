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
	string n;
	cin >> n;
	if (n[0] >= 97){
		n[0] -= 32;

	}
	cout << n << endl;
	
	return 0;
}