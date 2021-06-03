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



int main(int argc, char const *argv[])
{
	ll n, m;
     cin >> n;
     n --;
     m = n;
     n = ((n * (n+1)) / 2);
     // cout << n << endl;
     n = ((n+1)/2);
     // cout << n << endl;
     ll cnt = 0;
     while (n > 0){
          n -= m;
          m--;
          cnt ++;
          // cout << n << " " << m+1 << endl;
     }
     cout << cnt << endl;


	return 0;
}
