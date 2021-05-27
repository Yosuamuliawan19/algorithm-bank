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
	int n, now;
	int c = 0, bi = 0, ba = 0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> now;
		if (i%3 == 0){
			c += now;
		}else if (i%3 == 1){
			bi += now;
		}else{
			ba += now;
		}
	}
	if (c > bi && c > ba){
		cout << "chest\n";
	}else if (bi > c && bi > ba){
		cout << "biceps\n";
	}else{
		cout << "back\n";
	}
	


	return 0;
}
