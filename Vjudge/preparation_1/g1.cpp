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
ll n,a,b;
vector<pair<int,int> > p;
int main(int argc, char const *argv[])
{

	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a >> b;
		p.pb(mp(a,b));
	}
	ll dist = 0;
	for (int i=0;i<n;i++){
		ll j = (i+1)%n;
		ll x = abs(p[i].fi-p[j].fi), y = abs(p[i].se-p[j].se);
		ll gcdd = __gcd(x,y);
		if (x == 0) dist+=y;
		else if (y == 0) dist+=x;
		else dist+=gcdd;
	}
	ll area = 0;
	for (ll i = 0; i < n; i++){
		ll j = (i+1)%n;
	    	area += (p[j].fi + p[i].fi) * (p[j].se - p[i].se);
	}
	area = abs(area);
	// cout << dist << endl;
	area -= dist;
	area += 2;
	area /= 2;
	printf("%lld\n", area);
	return 0;
}
