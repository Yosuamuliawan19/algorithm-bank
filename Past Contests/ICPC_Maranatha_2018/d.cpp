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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
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

ll gcd(ll x , ll y){
     if (x == 0 || y == 0) return 0;
     if (x == y) return x;
     if (x > y) {
          return gcd(x-y, y);
     }else{
          return gcd(x, y-x);
     }
}


int main(int argc, char const *argv[])
{
	string s;
     cin >> s;
     for (int i=0;i<s.length();i++) if(s[i] == ',') s[i] = ' ';
     stringstream ss(s);
     ll x, y;
     ss >> x >> y;
     // cout << x << " " << y << endl;
     cout << gcd(x,y) << endl;
	return 0;
}
