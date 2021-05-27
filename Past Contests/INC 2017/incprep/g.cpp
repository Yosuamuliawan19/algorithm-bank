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
int prime[32769] = {};
void sieve(){
	fill(begin(prime) , end(prime), 1);
	for (int i = 2; i < 182; ++i)
	{
		if (prime[i]){
			for (int i1 = i * 2; i1 < 32769 ; i1 += i)
			{
				prime[i1] = 0;
 			}
		}
	}
	prime[0] = prime[1] = 0;
}
int main(int argc, char const *argv[])
{
	sieve();
	int n;
	while (cin >> n){
		if (n == 0) break;
		int count = 0;
		for (int i = 0; i <= n/2; ++i)
		{
			if (prime[i]){
				if (prime[n - i]){
					//cout << i << " + "<< n -i << endl;
					count ++;
				}
			}
		}
		cout << count << endl;
	}
	
	return 0;
}