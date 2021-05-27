#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n,b,h,w;
	while (cin >> n >> b >> h >> w){
		long mincost = 0;
		for (int i = 0; i < h; ++i)
		{
			long price;
			cin >> price;
			for (int i2 = 0; i2 < w; ++i2)
			{
				int w;
				cin >> w;
				if ( w >= n && ((price * n) <= b)){
					if (mincost >= price * n || mincost == 0){
						mincost = price * n;
					}
				}
			}
		}
		if (mincost == 0){
			cout << "stay home" << endl;
		}else{
			cout << mincost << endl;
		}
	}
	return 0;
}