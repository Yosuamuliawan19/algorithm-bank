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
	int a, b;
     while (cin >> a >> b){
          if (a==0 && b==0) break;
          int r = a, c = b;
          // swap
          if (a > b){
               int tmp = a;
               a = b;
               b = tmp;
          }

          if (a == 1){
               cout << b;
          }else if (a == 2){
               int tot = (b/4)*4;
               if (b%4 == 1){
                    tot += 2;
               }else if (b%4 > 1){
                    tot += 4;
               }
               cout << tot ;
          }else{
               cout << ((a*b)+1)/2;
          }
          printf(" knights may be placed on a %d row %d column board.\n",r,c);
     }
	return 0;
}
