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
ll n, k, arr[10100];
int main()
{
     cin >> n >> k;

     for (int i=0;i<n;i++) cin >> arr[i];
     if (k >= n) {
          cout << -1 << endl;
          return 0;
     }
     sort(arr, arr+n);
     cout << arr[k] << endl;
	return 0;
}
