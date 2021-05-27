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
	string s;
	cin >> s;
	ll tmp = 0, ans = 0, mod = 1000000007;
	for (int i=s.length()-1;i>=0;i--){
		if (s[i] == 'a'){
			ans = (ans+tmp)%mod;
			tmp = (tmp*2)%mod;
		}else{
			tmp = (tmp+1)%mod;
		}
	}
	cout << ans << endl;

	return 0;
}
