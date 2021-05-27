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
	ios_base::sync_with_stdio(false);
     int n;
     while (cin >> n){
		if (n == 0) break;
		int l = 0, r = n;
		bool printr = 0;
          cout << "Printing order for " << n << " pages:\n";
          double sheet = 0.5;
		if (n % 4 != 0) n  = (4 * (int)(n/4)) + 4;
		cout << n << endl;
          while (sheet+=0.5){
               if (r-l <= 0) break;
			// cout << n -l << endl;
               bool front = (sheet -(int)sheet == 0?1:0);
               cout << "Sheet "<< (int)sheet << ", " <<(front?"front":"back ") <<": ";
			if (l >= n / 4 ) printr = 1;
			if (front){
				if (printr) cout << r-- <<", " << ++l<< endl;
				else cout << "Blank, " <<  ++l <<endl;
               }else{
				if (printr) cout << ++l <<", " << r--<< endl;
				else cout << ++l << ", Blank\n";
               }




          }
     }

	return 0;
}
