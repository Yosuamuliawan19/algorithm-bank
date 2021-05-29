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
	double n;
	while (cin >> n){
		vector<pair < int , int > > res;
		int count = 0;
		for (int x = n + 1; x <= n * 2 ; ++x)
		{
			double  y =  ((double) x * n) /  ( (double) x - n ) ;
			if ( (int)(x * n) % (int)(x - n )  == 0) {
				
					res.push_back(make_pair(x , y));
					count ++; 
			
				
			}
		//	cout << x << " " << y  << endl;
		}
 		cout << count << endl;
		for (int i = 0; i < count; ++i)
		{
			cout << "1/" << n << " = 1/" << res[i].second << " + 1/" << res[i].first << endl; 
		}
	}
	
	return 0;
}