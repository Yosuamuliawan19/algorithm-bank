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
int maxDifference(vector<int> a) {
	int mn = a[0];
	int mx = -1;
	for (int i=1;i<a.size();i++){
		if (a[i] > mn){
			mx = max(a[i]-mn, mx);
		}
		mn = min(mn, a[i]);
	}
	return mx;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i=0;i<n;i++){
		cin >> v[i];
	}
	cout << maxDifference(v) << endl;


	return 0;
}
