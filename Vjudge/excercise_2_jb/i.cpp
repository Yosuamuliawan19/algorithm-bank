#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int a , b ;
	cin >> a >> b;
	int res = 0;
	int hrs = 0;
	while (true){
		hrs ++;
		res ++;
		a --;
		if (res >= b){
			res -= b;
			a ++;
		}
		if (a == 0){
			cout << hrs << endl;
			break;
		}
	}
	return 0;
}