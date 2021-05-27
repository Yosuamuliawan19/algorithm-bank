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

int main()
{

	int n, home[100010] ={0}, away[100010] = {0}, h, a;
	cin >> n;

	for (int i=0;i<n;i++){
		cin >> h >> a;
		home[h]++;
		away[i] = a;
	}
	ll tot = n*(n-1);
	for (int i=0;i<n;i++){
		int cur = away[i];
		cout << (n-1) + home[cur] << " " << (n-1) - home[cur] << endl;
	}

	return 0;
}
