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
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{

	int tc, n,tmp;
	cin >> tc;
     int a[100001] = {0};
     int b[100001] = {0};

     for (int t=1;t<=tc;t++){
          cin >> n;
          for (int i=0;i<n;i++) cin >> a[i];
          for (int i=0;i<n;i++) cin >> b[i];
          int sum = 0, sun = 0, ans = 0;
          for (int i=0;i<n;i++){
               sum += a[i]-b[i];
               sun += a[i]-b[i];
               if (sun < 0){
                    sun = 0;
                    ans = i+1;
               }
          }
          cout << "Case " << t << ": ";
          if (sum < 0 || ans > n){
               cout << "Not possible\n";
          }else{
               cout << "Possible from station " << ans + 1<<"\n";
          }

     }


	return 0;
}
