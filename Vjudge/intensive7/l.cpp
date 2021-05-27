// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int tc;
string s;
int main()
{
	cin >> tc;
     cin >> s;
     int x = 0, y= 0;
     string a = ":)", b = "(:", c = ":(", d = "):";
     for (int i=0;i<tc-1;i++){
          string cur = "";
          cur += s[i];
          cur += s[i+1];
          if (cur == a || cur == b){
               x ++;
          }else if (cur == c || cur == d){
               y ++;
          }
     }

     if (x > y){
          cout << "HAPPY\n";
     }else if (x == y){
          cout << "BORED\n";
     }else{
          cout << "SAD\n";
     }
	return 0;
}
