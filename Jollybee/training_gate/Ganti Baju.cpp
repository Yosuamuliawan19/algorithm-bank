#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>
#include <string.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
     ll p;
     cin >> p;
     double n = (p/100.0);
     cout << n <<endl;
     n = n + n + n;
     cout << n/3 << endl;
	return 0;
}
