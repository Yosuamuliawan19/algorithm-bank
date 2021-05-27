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
	int k , l , m , n , d;
	cin >> k >> l >> m >> n >> d;
	int tot = 0 ;
	for (int i = 1 ; i <= d; ++i)
	{
		if ((i % k == 0 && i >= k )||
			(i % l == 0 && i >= l )||
			(i % m == 0 && i >= m )||
			(i % n == 0 && i >= n )){
			tot ++;
		}
	}
	cout << tot << endl;
	return 0;
}