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
ll tc,n,v,l,r;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n >> v >> l >> r;
          ll cnt = floor(n/v);
          ll a = floor((l-1)/v);
          ll b = floor((r)/v);
          // cout << a << " " << b <<// endl;
          cnt -= (b-a);

          cout << cnt << endl;
     }

	return 0;
}
