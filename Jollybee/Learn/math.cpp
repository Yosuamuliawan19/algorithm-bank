#include<iostream>
using namespace std;
// greatest common divisor
int gcd(int a, int b){
	while(b){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
// find n to the power of x
int exp(double n, int x){
	if (x == 0) return 1;
	else if (x == 1) return n;
	double t = exp(n , x/2);
	return t * t * exp(n , x%2);
}
int main(int argc, char const *argv[])
{
	cout << exp(5, 3);
	return 0;
}