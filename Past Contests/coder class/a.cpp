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
typedef long long ll;

#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(int argc, char const *argv[])
{
     ll tc;
     ll arr[3];
     cin >> tc;
     while (tc--){
          cin >> arr[0] >> arr[1] >> arr[2];
          sort(arr, arr+3);
          ll a = arr[0], b = arr[1], c = arr[2];

          if (a + b == c){
               cout << "garis lurus\n";
          }else if (a + b < c){
               cout << "bukan segitiga\n";
          }else if (a == b && b == c){
               cout << "segitiga sama sisi\n";
          }else if ((a*a) == ((c*c)-(b*b))){
               cout << "segitiga siku-siku\n";
          }else if (a == b || b == c || a == c){
               cout << "segitiga sama kaki\n";
          }else{
               cout << "segitiga sembarang\n";
          }

     }
	return 0;
}
