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
	int n, arr[15], arr2[15];
	while (cin >> n){
		if (!n) break;
		// cout << n << endl;
		int tot1 = 0, tot2 = 0;
		int idx1 = -1, idx2 = -1;
		for (int i=0;i<n;i++){
			cin >> arr[i];
			tot1 += arr[i];
			if (i >= 2 && idx1 == -1){
				if (arr[i] == arr[i-1] && arr[i-1] == arr[i-2]){
					idx1 = i-2;
				}
			}
		}
		for (int i=0;i<n;i++){
			cin >> arr2[i];
			tot2 += arr2[i];
			if (i >= 2 && idx2 == -1){
				if (arr2[i] == arr2[i-1] && arr2[i-1] == arr2[i-2]){
					idx2 = i-2;
				}
			}
		}
		// cout << idx1 << " " << idx2 << endl;
		// cout << tot1 << " " << tot2 << endl;

		if (idx2 == -1 && idx1 != -1) tot1 += 30;
		else if (idx1 == -1 && idx2 != -1) tot2 += 30;
		else if (idx1 != -1 && idx2 != -1 && idx1 != idx2){
			if (idx1 < idx2) tot1 += 30;
			else tot2 += 30;
		}
		// cout << tot1 << "-" << tot2 << endl;
		if (tot1 == tot2) cout << "T\n";
		else if (tot1 > tot2) cout << "M\n";
		else cout << "L\n";

	}


	return 0;
}
