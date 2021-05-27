#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	int b = 0;
	cin >> b;

	int state = 0;
	for (int x=0;x<n-1;x++){
		int a;
		cin >> a;
		if (state == 0){
			if (a == b ){ state = 1;}
			else if(a < b){ state = 2;}
		} else if (state == 1){
			if (a > b){cout << "NO"; return 0;}
			if (a < b ){ state = 2;}
		}else if (state == 2){
			if (!(a < b)) {cout << "NO"; return 0;}
		}
		b = a;
	}
	cout << "YES";
	return 0;
}