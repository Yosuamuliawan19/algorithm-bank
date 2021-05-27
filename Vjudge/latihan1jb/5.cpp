#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int x;
	cin >> x;
	int count = 0;
	while (x != 0){
		count ++;
		if (x >= 5){
			x-= 5;
			continue;
		} 
		if (x >= 4){
			x-= 4;
continue;		} 
		if (x >= 3){
			x-= 3;
continue;		} 
		if (x >= 2){
			x-= 2;
continue;		} 
		if (x >= 1){
			x-= 1;
continue;		} 
		
	}
	cout << count;
	return 0;
}