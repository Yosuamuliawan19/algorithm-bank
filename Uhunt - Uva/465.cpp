#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<string>
#include<sstream>

using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)



int main(int argc, char const *argv[])
{
     string s;
	double a,b;
     char op;
     while (getline(cin, s)){
          cout << s << endl;
          stringstream ss(s);
          ss >> a >> op >> b;
          if (a > INT_MAX) cout << "first number too big\n";
          if (b > INT_MAX) cout << "second number too big\n";
          // cout << a + b << endl;
          if (op == '*' && (a*b) > INT_MAX) {
               cout << "result too big\n";
          }
          if (op == '+' && a+b > INT_MAX){
               cout << "result too big\n";
          }
     }
	return 0;
}
