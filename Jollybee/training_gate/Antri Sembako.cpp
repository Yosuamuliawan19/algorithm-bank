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

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
     int tc;
     string arr[20010];
     cin >> tc;
     int f = 10009, b = 10010;
     int q; string s;
     while (tc--){
          cin >> q ;
          if (q == 1){
               cin >> arr[f--];
          }else if (q == 2){
               cin >> arr[b++];
          }else if (q == 3){
               cout << arr[++f] << endl;;
          }else{
               cout << arr[--b] << endl;
          }
     }
	return 0;
}
