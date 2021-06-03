#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	cout << n << " " ;
	int div = 2;
	while(n != 1){
		if (n % div != 0){
			div++;
		}else{
			n /= div;
			cout << n << " ";
		}
	}
	return 0;
}