#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
	int a,b ;
	while (cin >> a >> b){
		int max = 0;
		int aa = a;
		int bb = b;
		if (a  > b){
			aa = b;
			bb = a;
		}
		for (int x=aa;x<bb+1;x++){
			int counter = 1;
			int c = x;
			while (c != 1){
				if ( c%2 == 0){
					c = c / 2;
				}else{
					c = 3 *c + 1;
				}
				counter ++;
			}
			if (counter > max){
				max = counter;
			}

		}
		cout <<a << " "<<b << " "<< max << endl;
	}
}