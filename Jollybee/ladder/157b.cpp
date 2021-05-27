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
const double PI = acos(-1);
int main()
{
	int n, arr[1100];
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr, arr+n, greater<int>());
	double tot = 0;
	for (int i=0;i<n;i++){
		double area = PI*(double)arr[i]*(double)arr[i];
		if (i%2==0){
			tot += area;
		}else tot -= area;
	}
	cout << fixed << setprecision(6) <<  tot << endl;


	return 0;
}
