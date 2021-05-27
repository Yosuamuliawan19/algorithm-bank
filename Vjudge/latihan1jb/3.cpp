#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int m,n;
	cin >> m >> n;
	if ( m % 2 != 0 && n % 2 == 0) {
		int temp = m;
		m = n;
		n = temp;
	}

	if (m % 2 != 0){
		cout << ((m / 2) * n ) + (n / 2) << endl; 

	}else{
		cout << (m / 2) * n << endl;
	}
	return 0;
}