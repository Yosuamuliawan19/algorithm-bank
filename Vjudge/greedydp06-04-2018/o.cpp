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
map<ll,ll> mapp;
ll dp(ll cur){
     if (mapp[cur] != 0) return mapp[cur];
     if (cur == 0 || cur == 1) return cur;
     ll ret = dp((ll) cur/4) + dp((ll) cur/2) + dp((ll) cur/3);
     return mapp[cur] = max(ret, cur);
}

int main(int argc, char const *argv[])
{
	ll n;
     while (cin >> n){
          cout << dp(n) << endl;
     }

	return 0;
}
