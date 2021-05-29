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
     int arr[1500] = {0};
     while (cin >> n){
          if (!n) break;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr,arr+n);
          bool f = 1;
          if (arr[0]> 200) f =0;
          if (2*(1422 - arr[n-1])>200) f=0;

          for (int i=0;i<n-1;i++){
               if (arr[i+1]-arr[i] > 200){
                    f = 0; break;
               }
          }

          if (f){
               cout << "POSSIBLE\n";
          }else{
               cout << "IMPOSSIBLE\n";
          }
     }
	return 0;
}
