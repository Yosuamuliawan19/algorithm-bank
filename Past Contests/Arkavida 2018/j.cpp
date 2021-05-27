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
	int jacketCost = 0, sockCost = 0, money = 0;
	cin >> jacketCost >> sockCost >> money;

	money = money - jacketCost;
	
	money /= sockCost;
	
	if (money % 2 == 0 ){
		cout << "Lucky Chef" << endl;
	}else{
		cout << "Unlucky Chef" << endl;
	}
	return 0;
}