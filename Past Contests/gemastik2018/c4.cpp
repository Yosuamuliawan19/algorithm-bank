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
ll tc,n;
ll a(ll n){
     if (n == 1) return 1;
     else if (n == 2) return 3;
     else if (n == 3) return 21;
     return (n*n)*a(n-1) - ((1/2)*n*(n-1)*(1/2)*n*(n-1))*a(n-2);
}
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n;
          cout << a(n) << endl;
     }

	return 0;
}
