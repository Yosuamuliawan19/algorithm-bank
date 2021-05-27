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
	ll arr[3];
	ll tot = 0;
	for (ll i=0;i<3;i++){
		cin >> arr[i];
	}
	sort(arr, arr+3);
	if (arr[2]/2 >= arr[0]+arr[1]) cout << arr[0]+arr[1] << endl;
	else cout << (arr[0]+arr[1]+arr[2])/3 << endl;


	return 0;
}
