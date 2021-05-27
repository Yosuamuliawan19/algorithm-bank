#include<iostream>
#include<cmath>
using namespace std;
int main () {
	long long x;
	cin >> x; 
	long long tc;
	while (x--){	
		tc ++;
		long long b , e , m;
		cin >> b >> e >> m;
		cout <<  tc << ". "<< (long long)( pow(b,e)) % m << endl; 
	}




	return  0;
}