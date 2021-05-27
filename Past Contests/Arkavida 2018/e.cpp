#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int h , m ;
		cin >> h >> m;
		int count = 0;
		cout<< "sdasd" << endl;
		if (h > m){
			for (int i1 = 0; i1 < m; ++i1)
			{
				if (i1  < 10){

					for (int i2 = 0; i2 < h; ++i2)
					{
						if (i2 ==0 & i1 < h){
							count ++ ;
						}
						if (( i1 * 10 ) + i1 < h){
							count ++;
						}else{
							break;
						}
						i1 *= 10;
					}
				}else if ( i1 == 100){
					break;
				}else{
					if (i1 % 10 == i1 / 10){
						for (int i2 = 0; i2 < h; ++i2)
						{
							if (i2 == 0 & i1 < h){
								count ++ ;
							}
							if ((i1 % 10 * 10) + i1 < h ){
								count ++;
							}
							i1 *= 10;
						}
					}
				}
			}
		}else{
for (int i1 = 0; i1 < m; ++i1)
			{
				if (i1  < 10){

					for (int i2 = 0; i2 < m; ++i2)
					{
						if (i2 ==0 & i1 < m){
							count ++ ;
						}
						if (( i1 * 10 ) + i1 < m){
							count ++;
						}else{
							break;
						}
						i1 *= 10;
					}
				}else if ( i1 == 100){
					break;
				}else{
					if (i1 % 10 == i1 / 10){
						for (int i2 = 0; i2 < m; ++i2)
						{
							if (i2 == 0 & i1 < m){
								count ++ ;
							}
							if ((i1 % 10 * 10) + i1 < m){
								count ++;
							}
							i1 *= 10;
						}
					}
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}