#include<iostream>
#include<string>
using namespace std;
int main (){
	int tc;
	cin >> tc;
	while (tc -- ){
		
		double a , b , c;
		cin >> a >> b >> c ;
		if ( ( a + b == c ) ||
		( a * b == c ) ||
		( a / b == c ) ||
		( a - b == c ) ||
		( b + a  == c ) ||
		( b *a  == c ) ||
		( b /a == c ) ||
		( b - a == c )  ){
				cout << "Possible" << endl;
		}else{
			cout << "Impossible" << endl;
		}
	}
	return 0;
}
