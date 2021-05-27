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
	while (1){
		int steps = 0, add = 0;
		for (int i=0;i<s.length()-1;i++){
			if (s[i] == 'a' && s[i+1] == 'b'){
				s = "bba" + s.substr(i+2, s.length()-i+2);
				cout << s << endl;
			}
		}
		if (add == 0) break;
	}

	return 0;
}
