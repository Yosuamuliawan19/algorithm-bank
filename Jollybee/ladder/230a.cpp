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
	int s, n, a, b;
	vector<pair<int,int> > arr;
	cin >> s >> n;
	for (int i=0;i<n;i++){
		cin >> a >> b;
		arr.pb(mp(a,b));
	}
	sort(arr.begin(), arr.end());
	bool flag = 1;
	for (int i=0;i<n;i++){
		if (s <= arr[i].fi){
			flag = 0; break;
		}
		s += arr[i].se;
	}
	if (flag) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
