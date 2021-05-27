
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
string a, b;
int main()
{
	cin >> a >> b;
     string x;
     for (int i=0;i<a.length();i++){
          int c =  a[i]-'0';
          int d =  b[i]-'0';
          x += (char) (abs(a[i]-b[i])+'0');
     }
     int idx = 0;
     while (x[idx] == '0') idx++;
     string y = "";
     for (;idx<x.length();idx++){
          y += x[idx] ;
     }
     if (y == "") y = "0";
     cout << y<<  endl;

	return 0;
}
