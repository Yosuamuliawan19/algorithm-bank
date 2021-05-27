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
	int n;
     int arr[10010] = {0};
     while (cin >>n){
          if (!n) break;
          int ans = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          for (int i=1;i<n-1;i++){
               // cout << arr[i-1]  << " " << arr[i] << " " << arr[i+1] << endl;
               if (arr[i] > arr[i+1] && arr[i] > arr[i-1]) {
                    ans ++;
                    // cout << "max " << arr[i] << endl;
               }
               if (arr[i] < arr[i+1] && arr[i] < arr[i-1]){
                    ans ++;
                    // cout << "min " << arr[i] << endl;
               }
          }
          if (arr[n-1] > arr[0] && arr[n-1] > arr[n-2]) {
               ans ++;
               // cout << "heu\n";
          }
          if (arr[0] < arr[1] && arr[0] < arr[n-1]) {
               ans ++;
               // cout << "yo\n";
          }
          if (arr[n-1] < arr[0] && arr[n-1] < arr[n-2]) {
               ans ++;
               // cout << "heu\n";
          }
          if (arr[0] > arr[1] && arr[0] > arr[n-1]) {
               ans ++;
               // cout << "yo\n";
          }
          cout << ans << endl;
     }

	return 0;
}
