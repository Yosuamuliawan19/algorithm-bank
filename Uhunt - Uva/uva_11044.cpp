#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int x=0;
	scanf("%d", &x);
	for (int i=0;i<x;x++){
		int a,b;
		scanf("%d%d",&a,&b);
		int res =  (a -2) / 3;
		if ((a-2) % 3 > 0) res ++;
		int res2 =  (b -2) / 3;
		if ((b-2) % 3 > 0) res2 ++;
		printf("%d\n", res*res2);
	}
	return 0;
}