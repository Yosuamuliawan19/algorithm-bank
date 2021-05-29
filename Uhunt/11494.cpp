#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	// ios_base::sync_with_stdio(false);
     int a, b, c, d;
     while (cin >> a >> b >> c >> d){
          if (!a && !b && !c && !d) break;
          int ans = 2;
          if (a == c && b == d) ans = 0;
          else if (a == c || b == d) ans = 1;
          else if (abs(c-a) == abs(d-b)) ans = 1;

          cout << ans << endl;
     }

	return 0;
}
