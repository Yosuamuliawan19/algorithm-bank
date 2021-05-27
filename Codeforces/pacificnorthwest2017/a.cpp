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


bool isPal(string cur){
	int a = 0, b = cur.length()-1;
	while (a < b){
		if (cur[a] != cur[b]) return 0;
		a ++;
		b--;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	bool f = 1;
	for (int i=0;i<s.length();i++){
		string cur = "";
		for (int j=i;j<s.length();j++){
			cur += s[j];
			// cout << cur << endl;
			if (isPal(cur)){
				if (cur.length() % 2 == 0){
					f = 0;
					break;
				}
			}
		}
		if(!f) break;
	}
	if (f) cout << "Odd.\n";
	else cout << "Or not.\n";
	return 0;
}
