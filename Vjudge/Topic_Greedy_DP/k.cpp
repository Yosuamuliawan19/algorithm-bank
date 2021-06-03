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
int n, arr[100];
int ans = 0;
void dp(int idx, int cnt, int prev){
	if (idx >= n){
		ans = max(cnt, ans);
		return;
	}
	dp (idx+1, cnt, prev);
	if (arr[idx] > prev){
		dp(idx+1, cnt+1, arr[idx]);
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	dp(0,0,0);
	cout << ans << endl;
	return 0;
}
