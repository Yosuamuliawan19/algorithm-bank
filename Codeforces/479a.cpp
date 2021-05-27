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
	
		int a , b , c;
		cin >> a >> b >> c;
		int ans[6] = {};
		ans[0] =  a + b * c;
		ans[1] =  (a + b) * c;
		ans[2] = a * b * c;
		ans[3] = a * ( b + c);
		ans[4] = a * b + c;
		ans[5] = a + b + c;
		sort(ans, ans + 6);
		cout << ans[5]<< endl;

	
	return 0;
}	