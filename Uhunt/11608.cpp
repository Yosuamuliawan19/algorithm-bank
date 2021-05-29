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
	// ios_base::sync_with_stdio(false);
	int n, cur;
     int tc = 1;
     while (cin >> n){
          if (n < 0) break;
          int pref[13] = {0};
          pref[0] = n;
          for (int i=0;i<12;i++){
               cin >> cur;
               pref[i+1] = pref[i] + cur;
          }
          int tot = 0;
     
          cout << "Case " << tc++ <<":\n";
          for (int i=0;i<12;i++){
               cin >> cur;
               tot += cur;
               if (pref[i] >= tot){
                    cout << "No problem! :D\n";
               }else{
                    cout << "No problem. :(\n";
                    tot -= cur;
               }
          }


     }

	return 0;
}
