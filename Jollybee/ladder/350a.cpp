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
	int n, m;
	int arr[110], arr2[110];
	cin >> n >> m;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	for (int j=0;j<m;j++){
		cin >> arr2[j];
	}
	sort(arr, arr+n);
	sort(arr2, arr2+m);
	// for (int i=0;i<n;i++) cout << arr[i] << " ";
	// cout << endl;
	// for (int i=0;i<m;i++) cout << arr2[i] << " ";
	// cout << endl;



	if (max(arr[0]*2, arr[n-1]) < arr2[0]) cout << max(arr[0]*2, arr[n-1]) << endl;
	else cout << -1 << endl;


	return 0;
}
