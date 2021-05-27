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
	int n, m, arr[110][110];
	cin >> n >> m;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}
	set<int> st;

	for (int j=0;j<m;j++){
		int mx = 0, mxidx = -1;
		for (int i=0;i<n;i++){
			if (arr[i][j] == mx){
				mxidx = -1;
				mx = 0;
			}else if (arr[i][j] > mx){
				mx = arr[i][j];
				mxidx = i;
			}
		}
		cout << mxidx << endl;
		if (mxidx != -1) st.insert(mxidx);
	}
	cout << st.size() << endl;


	return 0;
}
