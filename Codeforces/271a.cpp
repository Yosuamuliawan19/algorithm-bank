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
	int year;
	cin >> year;
	while (true){

		year ++;
		int n = year;
		int a, b, c ,d;
		a = n % 10;
		n /= 10;
		b = n % 10;
		n /= 10;
		c = n % 10;
		n /= 10;
		d = n % 10;
		
		if (a != b && a != c && a != d &&
			b != c && b != d && c != d){
			cout << year << endl;
			break;
		}
	}
	return 0;
}