#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x , a = 0, b= 0, c = 0;
	scanf("%d",&x);
	for (int i = 0; i < x; ++i)
	{
		int y;
			scanf("%d",&y);
		if ( y == 1){
			a ++;		
		} else if ( y == 2){
			b ++;
		}else {
			c ++;
		}			
	}
	
	if(a>=b && a>=c) cout<<b+c<<endl;
	else if(b>=a && b>=c) cout << a + c <<endl;
	else cout << a + b << endl;
	return 0;
}