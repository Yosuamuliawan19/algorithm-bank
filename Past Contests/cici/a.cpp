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
	int n, t = 1, arr[1100];
	while (cin >> n){
		if (n == 0) break;
		for (int i=0;i<n;i++) cin >> arr[i];

		int x = arr[0], y = 0;
		int idx1 = 1, idx2 = n-1;
		while (idx2 >= idx1){
			if (idx1 == idx2){
				y += arr[idx2];
				break;
			}
			if (arr[idx1] > arr[idx2]){
				y += arr[idx1++];
				x += arr[idx2--];
			}else{
				y += arr[idx2--];
				x += arr[idx1++];
			}

		}
		cout << x <<" " << y<< endl;
		cout << endl;
	}

	return 0;
}
