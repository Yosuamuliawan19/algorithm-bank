
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
     double a, b, c, d;
     cin >> a >> b >> c >>d;
     double x = max(3*a/10, a-(a/250)*c);
     double y  = max(3*b/10, b-(b/250)*d);
     // cout << x <<  " " << y << endl;
     if (x == y) cout << "Tie\n";
     else if (x > y) cout << "Misha\n";
     else cout << "Vasya\n";
	return 0;
}
