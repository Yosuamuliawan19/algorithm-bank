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
	int arr[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	for (int i=1;i<=100000;i++){
		int tot = i+arr[0][1]+arr[0][2];
		int x = tot - arr[1][0] - arr[1][2];
		int y = tot - arr[2][0] - arr[2][1];
		if (x > 0 && y > 0 && (x+y+i) == tot){
			arr[0][0] = i;
			arr[1][1] = x;
			arr[2][2] = y;
			for (int i=0;i<3;i++){
				for (int j=0;j<3;j++){
					if (j != 0) cout << " ";
					cout << arr[i][j];
				}
				cout << endl;
			}
			break;
		}

	}


	return 0;
}
