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
int n;
map<int,int> memo;
int dp (int n){
     if (memo[n] != 0) return memo[n];
     if (n == 1 || n == 0) return n;

     int ans =  max(n,dp((int)(n/2)) + dp((int)(n/3)) + dp((int)(n/4)));
     return ans;
}

int main(int argc, char const *argv[])
{
	while (cin >> n){
          // int ans = floor(n/2) + floor(n/3) + floor(n/4);
          cout << dp(n) << endl;
     }

	return 0;
}
