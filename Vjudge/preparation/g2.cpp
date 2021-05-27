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

ll n, x[100100], y[100100];
int main(int argc, char const *argv[])
{
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> x[i] >> y[i];
     }
     x[n] = x[0];
     y[n] = y[0];
     ll dist = 0;
     for (int i=0;i<n;i++){
          ll a = abs(x[i]-x[i+1]), b = abs(y[i]-y[i+1]);
          if (a == 0) dist+= b;
          else if (b == 0) dist+= a;
          else dist += __gcd(a,b);
     }
     ll area = 0;
     for (int i=0;i<n;i++){
          area += x[i] * y[i+1] - y[i] * x[i+1];
     }
     area = abs(area);
     area = area - dist + 2;
     area /= 2;
     cout << area << endl;
	return 0;

}
