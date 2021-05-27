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
int n, q;

int main()
{
	string line, cur;
	scanf("%d%d\n",&n,&q);
	vector<set<int> > v(n);
	for (int i=0;i<n;i++){
		getline(cin, line);
		stringstream ss(line);
		while (ss >> cur){
			v[i].insert(cur[0]);
			// cout  << cur[0] <<" " ;
		}
	}
	// cout << endl;
	set<int> st;
	for (int i=0;i<q;i++){
		cin >> cur;
		st.clear();
		for (int j=0;j<cur.length();j++){
			char now = cur[j];
			for (int k=0;k<n;k++){
				if (v[k].count(now)){
					st.insert(k);
				}
			}
		}
		cout << st.size() << endl;
		if (st.size() < cur.length()){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}

	return 0;
}
