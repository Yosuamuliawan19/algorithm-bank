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
	long long n ;
	cin >> n;
	vector<string> words(n);
	for (long long i=0;i<n;i++) cin >> words[i];


	sort(words.begin(), words.end());
	map<string,long long> mapp;
	for (long long i=0;i<n;i++){
		mapp[words[i]] = i;
	}
	vector<long long> chainlength(n, 1);
	for (long long i=0;i<n;i++){
		string cur = words[i];
		cout << endl;
		for (long long j=0;j<cur.length();j++){
			string now = cur.substr(0,0+j) + cur.substr(j+1);
			cout << now << endl;
			if (mapp.find(now) != mapp.end()){
				chainlength[i] = max(chainlength[i], chainlength[mapp[now]] +1);
			}
		}
	}
	long long mx = chainlength[0];
	for (long long i=0;i<n;i++){
		mx = max(chainlength[i], mx);
	}
	cout << mx << endl;











	return 0;
}
