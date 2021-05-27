#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
vector <int> st;
string pirates = "";
void build (int p , int l , int r){
	if (l == r){
		st[p] = pirates[l - 1];
	}else{
		build(p*2 , l ,  ( r - l )/ 2);
		build(p*2 + 1 , ((r-l)/2) + 1, r);
		st[p] = st[p*2] + st[p*2 + 1];
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int m;
		cin >> m;
		
		for (int i1 = 0; i1 < m ; i1 ++)
		{
			int t ; string te;
			cin >> t >> te;
			for (int i2 = 0; i2 < t ; i2 ++)
			{
				pirates += te;
			}
		}
		int q;
		cin >> q;
		build(1 , 0 , pirates.length());
		for (int i1 = 0; i1 < q ; i1 ++)
		{
			char t; int a , b;
			cin >> t >> a >> b;
			if (t == 'F'){

			}else if (t == 'E'){

			}else if (t == 'I'){

			}else{

			}
		}
	}
	return 0;
}