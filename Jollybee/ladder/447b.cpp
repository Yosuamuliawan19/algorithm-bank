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
	int k, arr[26];
	cin >> s >> k;

	int mx, mxidx = 0;
	cin >> arr[0];
	mx = arr[0];
	for (int i=1;i<26;i++){
		cin >> arr[i];
		if (arr[i] > mx){
			mx = arr[i];
			mxidx = i;
		}
	}
	int ans = 0;
	for (int i=0;i<s.length();i++){
		ans += (arr[(s[i]-'a')] * (i+1));
	}
	for (int i=s.length()+1;i<=s.length()+k;i++){
		ans += (i*mx);
	}
	cout << ans  << endl;

	return 0;
}
