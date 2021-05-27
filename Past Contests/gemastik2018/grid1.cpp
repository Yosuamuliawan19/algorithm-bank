#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
#define fi first
#define sec second
#define rep(a,b,c) for(int a=1;a<=b;a+=c)
#define repp(a,b,c,d) for(int a=b;a<=c;a+=d)

const double PI=acos(-1);
const double EPS=1e-12;


using namespace std;


int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int cnt=n+1;
	rep(i,n,1){
		rep(j,n,1){
			if(i==n){
				if(j==2)printf("%d",n*n-i+1);
				else if(j==1)printf("%d",i);
				else {
					printf("%d",cnt);
					cnt++;
				}
			}
			else{
				if(j==1&&i!=n)printf("%d",n*n-i+1);
				else if(j==2&&i!=n)printf("%d",i);
				else {
					printf("%d",cnt);
					cnt++;
				}
			}

			if(j!=n)printf(" ");
			else printf("\n");
		}
	}
	return 0;
}
