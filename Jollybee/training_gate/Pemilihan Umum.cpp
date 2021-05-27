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
ll gcd(ll x, ll y){
     if (x == y) return x;
     if (x > y){
          return gcd(x-y,y);
     }else{
          return gcd(x,y-x);
     }
}
ll lcm (ll x, ll y){
     return (x*y)/gcd(x,y);
}
int main(int argc, char const *argv[])
{
     ll a, b;
     cin >> a >> b;
     cout << lcm(a,b) << endl;
	return 0;
}
