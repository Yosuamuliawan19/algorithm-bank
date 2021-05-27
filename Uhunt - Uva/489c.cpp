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
ll m, s;
bool valid(ll len, ll sum){
	len = m-len;
	sum = s-sum;
	// cout << len << " " << sum << endl;
	if (sum <= 9*len ) return 1;
	return 0;
}
int main()
{
	cin >> m >> s;
	string mx = "", mn = "";


	ll sum = 0;
	for (int i=0;i<m;i++){
		for (int j=9;j>=0;j--){
			ll cur = sum + j;
			if ( (i>0 || j>0 || (m==1 && j == 0)) && (cur <= s &&valid(i+1, cur))){
				mx += (j+'0');
				sum = cur;
				break;
			}
		}
	}
	sum  = 0;


	for (int i=0;i<m;i++){
		for (int j=0;j<=9;j++){
			ll cur = sum + j;
			if ((i>0 || j>0 || (m==1 && j == 0)) && (cur <=s && valid(i+1,cur))){
				mn += (j+'0');
				sum = cur;
				break;
			}
		}
	}

	if (mn.length() < m) cout << "-1 ";
	else cout << mn << " ";

	if (mx.length() < m) cout << "-1\n";
	else cout << mx << endl;

	return 0;
}
