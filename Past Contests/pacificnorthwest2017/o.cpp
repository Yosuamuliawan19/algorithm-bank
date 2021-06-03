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

int conv(char tmp){
	int ret = 0;
	if (tmp >= '0' && tmp <= '9'){
		ret = tmp-'0';
	}else{
		ret = tmp-'A'+10;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int n, arr[40][40]; char tmp;
	map<int,bool> mp;
	while (cin >> n){
		bool latin = 1;
		for (int i=0;i<n;i++){
			mp.clear();
			for (int j=0;j<n;j++){
				cin >> tmp;
				arr[i][j] = conv(tmp);
				if (mp.find(arr[i][j]) != mp.end()){
					latin = 0;
				}
				mp[arr[i][j]] = 1;
			}
		}
		if (!latin){
			cout << "No\n"; continue;
		}

		for (int j=0;j<n;j++){
			mp.clear();
			for (int i=0;i<n;i++){
				if (mp.find(arr[i][j]) != mp.end()){
					latin = 0;
				}
				mp[arr[i][j]] = 1;
			}
		}

		if (!latin){
			cout << "No\n"; continue;
		}

		bool red = 1;
		for (int i=0;i<n-1;i++){
			if (arr[i][0]+1 != arr[i+1][0]){
				red = 0;
			}
		}
		for (int i=0;i<n-1;i++){
			if (arr[0][i]+1 != arr[0][i+1]){
				red = 0;
			}
		}
		if(red){
			cout << "Reduced\n";
		}else{
			cout << "Not Reduced\n";
		}
	}






	return 0;
}
