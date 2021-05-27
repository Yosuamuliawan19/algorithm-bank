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
     char arr[18][2]  = {{'B','1'}, {'F','1'}, {'P','1'} , {'V','1'},
          {'C','2'}, {'G','2'}, {'J','2'} , {'K','2'}, {'Q','2'}, {'S','2'}, {'X','2'} , {'Z','2'},
          {'D','3'}, {'T','3'},
          {'L','4'},
          {'M','5'}, {'N','5'},
          {'R','6'} };
	string s;
     while (cin >> s){
          string ans = "";
          char prev = '0';
          for (int i=0;i<s.length();i++){
               char code  = '9';
               for (int j=0;j<18;j++){
                    if (arr[j][0] == s[i]){
                         code = arr[j][1];
                         break;
                    }
               }
               if (code == '9') prev = '0';
               else if (code != prev){
                    ans += code;
                    prev = code;
               }
          }
          cout << ans <<endl;
     }

	return 0;
}
