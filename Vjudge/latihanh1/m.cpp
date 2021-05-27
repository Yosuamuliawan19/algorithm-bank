#include<iostream>
using namespace std;
int main(){
	int n , a , b , c , d;
	cin >> n >> a >> b >> c >> d;
	int x = (n - a) + (n - b) + (n - c) + (n - d);
	int y = a + b + c + d;
	if (y >= x){
		cout << x << endl;
	}else{
		cout << y << endl;
	}

	return 0;
}