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
int main(int argc, char const *argv[])
{
	int a;
	string b;
	while (cin >> a >> b){
		if (a == 0){
			break;
		}
		int gl = b.length() / a;
		for (int i = 0; i < a; ++i)
		{
			for (int i1 = i * gl -1 + gl ; i1 >= i * gl ; i1 --)
			{
				cout << b[i1];
			}
		}
		cout << endl;
	} 
	return 0;
}