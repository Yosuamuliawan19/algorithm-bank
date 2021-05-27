#include<iostream>
using namespace std;
void rec(int n){
	if (n != 0){
		rec(n-1);
		cout << (char)(n+64);
		rec(n-1);
	}
	
}

int main(){

	int n;
	cin >> n;
	rec(n);
	



	return 0;
}