// #include<stdio.h>
// #include <bits/stdc++.h>
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
string g(string str){
     int i=0;
     string new_str = "";
     while (i<str.length()-1){
          new_str += str[i+1];
          i++;
     }
     return new_str;
}
string f(string str){
     if (str.length() == 0) return "";
     else if (str.length() == 1) return str;
     else return f(g(str)) + str[0];
}
string  h(ll n, string str){
     int iter =0;
     while (n!=1){
          iter ++;
          if (n%2 == 0) n/=2;
          else n = (3*n)  + 1;
          str = f(str);
     }
     return str;
}
int main()
{
	for (int i=1;i<100;i++){
          // cout << h(i, "fruits") << " " << i << endl;
     }
     cout << h(1,"fruits")
     << h(2, "fruits")
     << h(5, "fruits")
     << h(pow(2,12), "fruits") 
     << h(pow(2,13), "fruits");

	return 0;
}
