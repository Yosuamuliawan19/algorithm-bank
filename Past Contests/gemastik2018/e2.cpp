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
#include<deque>
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
int n, m, t, d, l;
int main()
{
	cin >> n >> m >> t >> d;
     ll val = ceil((t*t)/2.0);
     ll a = floor(n/(t+d));
     ll b = floor(m/(t+d));
     ll ans = a*b*val;
     ll val1 = ceil(t/2.0), val2 = floor(t/2.0);
     // cout << val1 << " " << val2 << endl;
     // cout << a << " " << b << endl;
     n = n%(t+d);
     m = m%(t+d);
     bool f = 1;
     ans += ceil((n*n)/2.0);
     while (n--){
          if (f) ans += val1*a;
          else ans += val2*a;
          f = !f;
     }
     f = 1;
     while (m--){
          if (f) ans += val1*b;
          else ans += val2*b;
          f = !f;
     }
     cout << ans << endl;
	return 0;
}
