#include<stdio.h>

int main(){
	
	int x;
	scanf("%d",&x);
	for (int i=0;i<x;i++){
		int a,b;
		scanf("%d%d", &a,&b);
		if (a > b) printf(">");
		else if(a < b) printf("<");
		else printf("=");
	}
	return 0;
}