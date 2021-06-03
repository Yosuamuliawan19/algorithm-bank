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
	int n , q ;
	cin >> n >> q;
	string s;
	cin >> s; 
	for (int i1 = 0; i1 < q; ++i1)
	{
		int f;
		cin >> f;
		int l , r;
		cin >> l >> r;
		if (f == 1){
			for (int i = l - 1 ; i <r; ++i)
			{
				if (s[i] == '0'){
					s[i] = '1';
				}else{
					s[i] = '0';
				}
			}
			cout << "After flip "<< s << endl;
		}else{
			int ma
			for (int i = l - 1; i < r; ++i)
			{
				/* code */
			}
		}
	}
	
	return 0;
}