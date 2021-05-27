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
int n, cnt = 0, f = 0;
int arr[9] = {4, 16, 37, 58, 89, 145, 42, 20 ,4};
void rec(int n){
	// cout << n << endl;
	if (n == 1){
		f = 1;
		return;
	}
	if (n == arr[cnt]){
		cnt ++;
	}else cnt = 0;
	if (cnt == 9){
		f = 0;
		return;
	}

	ll sum  = 0;
	while (n != 0){
		sum += (n%10) * (n%10);
		n /= 10;
	}
	rec(sum);
}
int main()
{
	cin >> n;
	rec(n);
	if (f) cout << "HAPPY\n";
	else cout << "UNHAPPY\n";

	return 0;
}
