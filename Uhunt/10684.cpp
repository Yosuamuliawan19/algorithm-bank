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
	while (1){
		int n;
		cin >> n;
		if (!n) break;

		int max = -1000;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			int cur;
			cin >> cur;
			sum += cur;

			if (sum > max){
				max = sum;
			}
			 if (sum < 0){
				sum = 0;
			}
		}
		if (sum > 0){
			
			cout << "The maximum winning streak is " << max <<"." << endl;
		}else{
			cout << "Losing streak." << endl;
		}
	}
	
	return 0;
}