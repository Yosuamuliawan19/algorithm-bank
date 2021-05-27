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
	int arr[6][6] = {0};
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			cin >> arr[i][j];
		}
	}
	int mx = INT_MIN;
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			int cur = 0;
			if (j >= 4 || i >= 4) continue;
			for (int x=i;x<i+3;x++){
				for (int y=j;y<j+3;y++){
					if ((y==j || y==j+2) && x == i+1 ) continue;
					cur += arr[x][y];
				}
			}
			mx = max(mx, cur);
		}
	}
	cout << mx << endl;

	return 0;
}
