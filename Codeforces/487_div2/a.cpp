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
#include<climits>
#include<set>
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



int main(int argc, char const *argv[])
{
	string arr[6] = {"ABC", "ACB", "BAC", "BCA", "CBA", "CAB"};
	string s;
	cin >> s;
	bool f = 0;
	for (int i=0;i<s.length();i++){
		for (int j=0;j<6;j++){
			if (s.substr(i,3) == arr[j]){
				f = 1;
				break;
			}
		}
		if (f) break;
	}

	if (f) printf("YES\n");
	else printf("NO\n");
	return 0;
}
