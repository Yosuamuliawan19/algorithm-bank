#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	while(true){
		int a;
		scanf("%d",&a);
		if (a == 0) break;
		int n,m;
		scanf("%d%d",&n,&m);
		for (int i=0;i<a;i++){
			int g , h;
			scanf("%d%d",&g,&h);
			if (g == n || h == m) printf("Divisa\n");
			else if (g > n){
				if (h > m) printf("NE\n");
				else  printf("NO\n");
			}
			else {
				if (h > m) printf("SE\n");
				else  printf("SO\n");
			}
		}
	}
	return 0;
}