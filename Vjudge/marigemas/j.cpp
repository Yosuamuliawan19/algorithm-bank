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

     map<int, double> m;
     m[0] = 2;
     int i = 1, tmp;
     while (i != 32){
          m[i] = (double) 1.0 / i;
          i *= 2;
     }

     int n;
     double ans = 0 ;
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> tmp;
          ans += m[tmp];
     }
     cout << setprecision(6) << fixed << ans << endl;

	return 0;
}
