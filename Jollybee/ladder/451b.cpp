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
int n, arr[100100], srt[100100];

void rev(int a, int b){
	while (a < b){
		int tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
		a++;b--;
	}
}
int main(int argc, char const *argv[])
{

	cin >> n;
	for (int i=0;i<n;i++){
		cin >> arr[i];
		srt[i] = arr[i];
	}
	sort(srt, srt+n);
	bool f = 0;
	int a = 0, b = 0;
	for (int i=1;i<n;i++){
		if (arr[i] < arr[i-1] && !f){
			f = 1;
			a = i-1;
		}
		if (f && arr[i] > arr[i-1]){
			f = 0;
			b = i-1;
			break;
		}else if (f && i == n-1){
			f = 0;
			b = i;
			break;
		}
	}
	// cout << a << " " << b << endl;
	f = 1;
	rev(a,b);
	for (int i=0;i<n;i++){
		if (arr[i] != srt[i]) {
			f = 0; break;
		}
	}
	if (f) {
		cout << "yes\n";
		cout << a+1 << " " << b+1 << endl;
	}else{
		cout << "no\n";
	}


	return 0;
}
