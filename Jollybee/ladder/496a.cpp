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
     int n, arr[110];
     cin >> n;
     for (int i=0;i<n;i++) cin >> arr[i];
     int mx = -1;
     for (int i=0;i<n-1;i++) mx = max(mx, arr[i+1]-arr[i]);

     int mn = INT_MAX;
     for (int i=1;i<n-1;i++){
          mn = min(mn, max(mx, arr[i+1]-arr[i-1] ));
     }

     cout << mn << endl;

	return 0;
}
