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
int arr[5] = {50,25,10,5,1}, n, table[10000] = {0};
int main(int argc, char const *argv[])
{

	while (cin >> n){
		memset(table, 0, sizeof(table));
    		table[0] = 1;
		for (int i=0;i<5;i++){
			for (int j=arr[i];j<=n;j++){
				table[j] += table[j-arr[i]];
			}
		}
		cout << table[n] << endl;
	}

	return 0;
}
