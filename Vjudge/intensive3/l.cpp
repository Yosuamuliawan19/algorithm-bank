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
double k, p, x;
int main()
{
	cin >> k >> p >> x;
     double mn = numeric_limits<double>::max();
     for (int i=1;i<1000000;i++){
          double cost = i * x;
          double days = k / i;
          double pen = p * days;
          mn = min(mn, pen+cost);
     }
     cout << fixed << setprecision(3) << mn << endl;

	return 0;
}
