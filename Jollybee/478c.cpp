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
	int arr[3];
	int tot = INT_MAX;
	for (int i=0;i<3;i++){
		cin >> arr[i];
		tot = min(tot, arr[i]);
	}
	for (int i=0;i<3;i++) arr[i] -= tot;


	cout << tot <<endl;
	for (int i=0;i<3;i++){
		cout << arr[i] << " " ;
	}

	return 0;
}
