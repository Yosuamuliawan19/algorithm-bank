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
     string s;
     cin >> tc;
     while (tc--){
          cin >> s;
          bool f = 1;
          int idx = s.length()-1;
          for (int i=0;i<idx;i++){
               if (s[i] != s[idx]){
                    f = 0;
                    break;
               }
               idx--;
          }
          if (f){
               cout << "palindrom\n";
          }else{
               cout << "bukan palindrom\n";
          }
     }
	return 0;
}
