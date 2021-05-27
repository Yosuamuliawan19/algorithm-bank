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

string make (string s){
	for (int i=0;i<s.length();i++){
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
		if (s[i] == 'p') s[i] = 'b';
		if (s[i] == 'i') s[i] = 'e';
	}
	return s;

}
int main()
{
	int n;
	string s1, s2;
	string a, b;


	cin >> n;
	for (int i=0;i<n;i++){
		cin >> s1 >> s2;
		string a = make(s1);
		string b = make(s2);
		// cout << a << " "<< b << endl;
		if (a == b) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
