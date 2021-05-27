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

	int arr[1100];
	map<ll, pair<int,int> > mapp;
	for (int i=1;i<=1000;i++){
		arr[i] = i*i;
	}
	int iter = 0;
	for (int i=1000;i>0;i--){
		for (int j=i-1;j>0;j--){
			mapp[arr[i]-arr[j]] = mp(i,j);
			mapp[arr[j]-arr[i]] = mp(i,j);
		}
	}
	int n;
	string input;
	while (getline(cin, input)){
		stringstream ss(input);
		// cout << input << endl;
		int ipt[2], idx = 0;
		while (ss >> ipt[idx++]);
		// cout << idx << endl;
		if (idx == 2){
			n = ipt[0];
			if (mapp.find(n) != mapp.end()){
				cout << mapp[n].fi << " " << mapp[n].se<<endl;
			}else{
				if (n%2 == 0) cout << "Bachelor Number.\n";
				else cout << "Spinster Number.\n";
			}
		}else{
			int cnt = 0;
			for (int i=ipt[0];i<=ipt[1];i++){
				if (mapp.find(i) != mapp.end()) cnt++;
			}
			cout << cnt << endl;
		}

	}
	return 0;
}
