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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
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
int n, arr[100010], tmp;
int upper(int off){
	int l = off, r = n;
	int ret = -1;
	while (r > l){
		int m = (r+l)/2;
		int cur = arr[m] - arr[off];
		if (cur > arr[off]){
			r = m-1;
			ret = r;
		}else{
			l = m+1;
		}
	}
	return ret;
}
int lower(int off){
	int l = off, r = n;
	int ret = -1;
	while (r > l){
		int m = (r+l)/2;
		int cur = arr[m] - arr[off];
		if (cur >= arr[off]){
			r = m-1;
			ret = r;
		}else{
			l = m+1;
		}
	}
	return ret;
}

int main(int argc, char const *argv[])
{

	cin >> n;
	cin >> arr[0];
	int ans = 0;
	for (int i=1;i<n;i++){
		cin >> tmp;
		arr[i] = arr[i-1] + tmp;
	}
	if (arr[n-1] % 3 != 0){
		cout << 0 << endl;
		return 0;
	}
	cout << arr[n-1] << endl;
	for (int i=0;i<n-2;i++){
		
	}



	return 0;
}
