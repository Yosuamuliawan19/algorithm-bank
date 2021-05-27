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

	int a, b;
	cin >> a >> b;
	int aa=0,d=0,bb=0;
	for (int i=1;i<=6;i++){
		if ( abs(a-i) == abs(b-i) ){
			d++;
		}else if (abs(a-i) > abs(b-i)){
			aa++;
		}else{
			bb++;
		}
	}
	cout << bb << " " << d << " "<< aa << endl;
	return 0;
}
