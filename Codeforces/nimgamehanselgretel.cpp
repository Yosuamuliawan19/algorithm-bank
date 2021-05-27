#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
	int p;
	cin >> p;
	for (int l=0;l<p;l++){
		int a,b,c,d;
		int x,y,x1,y1;
		cin >> x >> y >> x1 >> y1;
		a = x - 1 - x1;
		b = y - 1 - y1;
		c = x1;
		d = y1;
		if ( (a ^ b ^ c ^ d ) == 0){
			cout << "Hansel" << endl;
		}else{
			cout << "Gretel" << endl;
		};
	}
}