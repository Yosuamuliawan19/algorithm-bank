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
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		x = abs(x);
		long long tot = 0;
		for (int i1 = 1;  ; i1 ++)
		{
			//cout << i1 << endl;
			tot += i1;


			if (tot - (2 * i1) >= x){
			//	cout << tot - (2 * i1) << endl;
				if (((tot - (2 * i1) ) - x) % 2 == 0){
					
						cout << i1 << endl;
						break;
					
				}
			}else if (tot >= x){
			//	cout << tot << endl;
				if ((tot - x) % 2 == 0){
					
						cout << i1 << endl ;
						break;
				
				}
			}
		}
		if (i != n -1){
			cout << endl;
		}
	}
	return 0;
}