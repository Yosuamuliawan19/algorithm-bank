#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , m , a ;
	cin >> n >> m;
	a = 2;
	long long rows, col;
	if (n % a == 0){
		rows += (n /a);
	}else{
		rows += ((n/a) + 1);
	}

	if (m%a == 0){
		col += (m/a);
	}else{
		col += ((m/a) + 1);
	}
	cout << rows * col;

	return 0;
}