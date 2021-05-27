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

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

long long arr[51];
int main(int argc, char const *argv[])
{
     long long val = 1;
     for (int i=1;i<51;i++){
          arr[i] = arr[i-1] + val;
          val *= 2;
     }

     int tc,n,p;
     cin >> tc;
     while (tc--){
          cin >> n >> p;
          double ans = arr[n];
          ans = ans * p / 100;
          cout << setprecision(9) << fixed << ans << endl;
     }
	return 0;
}
