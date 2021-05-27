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
	int n , s ;
	cin >> n >> s ;
	string cons;
	cin >> cons;
	for (int i1 = 0; i1 < s ; i1 ++)
	{
		for (int i = 0; i < n; ++i)
		{
			if (cons[i] == 'B' && cons[i+1] == 'G'){
				cons[i] = 'G';
				cons[i + 1] = 'B';
				i++;
			}
		}
		
	}
		cout << cons << endl;
	
	return 0;
}