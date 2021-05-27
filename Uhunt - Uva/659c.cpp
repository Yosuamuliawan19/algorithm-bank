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
	int n, tot, cur;
	set<int> st;

	cin >> n >> tot;
	for (int i=0;i<n;i++){
		cin >> cur;
		st.insert(cur);
	}
	vector<int> v;
	int idx = 1, cnt = 0;
	while (1){
		if (st.find(idx) != st.end()){
			idx ++;
			continue;
		}
		if (tot-idx < 0){
			break;
		}
		tot -= idx;
		v.pb(idx);
		idx++;
		cnt++;
	}
	cout << cnt << endl;
	for (int i=0;i<v.size();i++){
		if (i != 0) cout << " ";
		cout << v[i] ;
	}
	return 0;
}
