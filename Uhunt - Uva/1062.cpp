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
#include<set>
#include<queue>
// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
	string s;
	int t = 1;
	while (cin >> s){
		if (s == "end") break;
		int ans = 0;
		for (int i=s.length()-1;i>=0;i--){
			char cur = s[i];
			if (cur == '+') continue;
			ans ++;
			s[i] = '+';
			for (int j=i-1;j>=0;j--){
				if (s[j] >= cur && s[j] != '+'){
					cur = s[j];
					s[j] = '+';
				}
			}
			// cout << s << endl;
		}
		cout << "Case " << t++ << ": " << ans << endl;
	}

	return 0;
}
